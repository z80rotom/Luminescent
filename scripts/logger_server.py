import asyncio
import logging
import sys


logging.basicConfig(format="{message}",
                    style='{',
                    datefmt="%H:%M:%S",
                    level=logging.DEBUG)


async def handle_connection(reader, writer):
    addr = writer.get_extra_info('peername')[0]
    logging.debug(f"[{addr}] Connected.")

    while True:
        try:
            data = await reader.readline()
            message = data.decode()

            if not message:
                logging.warning(f"[{addr}] Client sent an empty message, assuming disconnect.")
                break
            logging.info(f"[{addr}] {message}".strip())
        except ConnectionError:
            logging.warning(f"[{addr}] Disconnected.")
            break

    writer.close()


async def main(port: str = "5123"):
    server = await asyncio.start_server(handle_connection, '0.0.0.0', int(port))

    addrs = ', '.join((lambda x: f"{x[0]}:{x[1]}")(sock.getsockname()) for sock in server.sockets)
    logging.debug(f'Serving on {addrs}')

    async with server:
        await server.serve_forever()

if __name__ == "__main__":
    asyncio.run(main(*sys.argv[1:]))
