#include "nn.h"
#include "logger.hpp"

#define	MSG_DONTWAIT	 0x00000080

// ---------------------------- Socket Setup

enum SocketLogState {
    SOCKET_LOG_UNINITIALIZED = 0,
    SOCKET_LOG_CONNECTED = 1,
    SOCKET_LOG_UNAVAILABLE = 2
};

u8 socket_log_state = SOCKET_LOG_UNINITIALIZED;
s32 socket_log_socket = -1;
u8 socket_data_pool[0x600000 + 0x20000] __attribute__((aligned(0x1000)));

void socket_log(const char* str) {
    if (RELEASE) return;

    if (socket_log_state != SOCKET_LOG_CONNECTED)
        return;

    nn::socket::Send(socket_log_socket, str, strlen(str), 0);

    // Send newline for logger to display it
    if (str[strlen(str)-1] != '\n') {
        nn::socket::Send(socket_log_socket, "\n", 1, 0);
    }
}

s32 socket_read_char(char *out) {
    int totalLength = 0;

    if (socket_log_state != SOCKET_LOG_CONNECTED) {
        return totalLength;
    }

    char buf[1024];

    int valread;
    while (true) {
        valread = nn::socket::Recv(socket_log_socket, buf, strlen(buf), MSG_DONTWAIT);

        if (valread <= 0) {
            break;
        } else {

            strncat(out, buf, valread);

            totalLength += valread;
        }
    }

    return totalLength;

}

void socket_log_initialize() {
    if (RELEASE) return;

    in_addr hostAddress = { 0 };
    sockaddr serverAddress = { 0 };

    if (socket_log_state != SOCKET_LOG_UNINITIALIZED)
        return;

    auto result = nn::nifm::Initialize();
    if (result.isFailure()) {
        return;
    }

    nn::nifm::SubmitNetworkRequestAndWait();

    while (nn::nifm::IsNetworkRequestOnHold()) {}

    if (!nn::nifm::IsNetworkAvailable()) {
        socket_log_state = SOCKET_LOG_UNAVAILABLE;
        return;
    }

    if ((socket_log_socket = nn::socket::Socket(2, 1, 0)) < 0) {
        socket_log_state = SOCKET_LOG_UNAVAILABLE;
        return;
    }

    nn::socket::InetAton(LOGGER_IP, &hostAddress);

    serverAddress.address = hostAddress;
    serverAddress.port = nn::socket::InetHtons(LOGGER_PORT);
    serverAddress.family = 2;

    if (nn::socket::Connect(socket_log_socket, &serverAddress, sizeof(serverAddress)) != 0) {
        socket_log_state = SOCKET_LOG_UNAVAILABLE;
        return;
    }

    socket_log_state = SOCKET_LOG_CONNECTED;

    socket_log("Hello from " MODULE_NAME_STR "!\n");
}

int tryInitSocket() {
    socket_log_initialize();
    return 0;
}
