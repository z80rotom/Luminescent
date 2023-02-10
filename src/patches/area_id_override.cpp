#include "il2cpp.hpp"

#include "areaID.hpp"
#include "System/String.hpp"
#include "util.hpp"

#include <string>

#include "logger.hpp"

#define NUM_AREA_ID 675

// TODO: Move this to an external JSON: https://github.com/rafagafe/tiny-json
std::string AREA_NAMES[NUM_AREA_ID];
bool initialized_area_names = false;

std::string* getAreaNames()
{
    if (!initialized_area_names)
    {
        AREA_NAMES[C01] = "C01";
		AREA_NAMES[C01FS0101] = "C01FS0101";
		AREA_NAMES[C01PC0101] = "C01PC0101";
		AREA_NAMES[C01PC0102] = "C01PC0102";
		AREA_NAMES[C01PC0103] = "C01PC0103";
		AREA_NAMES[C01R0101] = "C01R0101";
		AREA_NAMES[C01R0102] = "C01R0102";
		AREA_NAMES[C01R0103] = "C01R0103";
		AREA_NAMES[C01R0201] = "C01R0201";
		AREA_NAMES[C01R0202] = "C01R0202";
		AREA_NAMES[C01R0203] = "C01R0203";
		AREA_NAMES[C01R0204] = "C01R0204";
		AREA_NAMES[C01R0205] = "C01R0205";
		AREA_NAMES[C01R0206] = "C01R0206";
		AREA_NAMES[C01R0207] = "C01R0207";
		AREA_NAMES[C01R0208] = "C01R0208";
		AREA_NAMES[C01R0301] = "C01R0301";
		AREA_NAMES[C01R0302] = "C01R0302";
		AREA_NAMES[C01R0501] = "C01R0501";
		AREA_NAMES[C01R0502] = "C01R0502";
		AREA_NAMES[C01R0601] = "C01R0601";
		AREA_NAMES[C01R0701] = "C01R0701";
		AREA_NAMES[C01R0801] = "C01R0801";
		AREA_NAMES[C01R0802] = "C01R0802";
		AREA_NAMES[C02] = "C02";
		AREA_NAMES[C02FS0101] = "C02FS0101";
		AREA_NAMES[C02GYM0101] = "C02GYM0101";
		AREA_NAMES[C02PC0101] = "C02PC0101";
		AREA_NAMES[C02PC0102] = "C02PC0102";
		AREA_NAMES[C02PC0103] = "C02PC0103";
		AREA_NAMES[C02R0101] = "C02R0101";
		AREA_NAMES[C02R0102] = "C02R0102";
		AREA_NAMES[C02R0103] = "C02R0103";
		AREA_NAMES[C02R0201] = "C02R0201";
		AREA_NAMES[C02R0301] = "C02R0301";
		AREA_NAMES[C02R0401] = "C02R0401";
		AREA_NAMES[C02R0501] = "C02R0501";
		AREA_NAMES[C02R0601] = "C02R0601";
		AREA_NAMES[C03] = "C03";
		AREA_NAMES[C03FS0101] = "C03FS0101";
		AREA_NAMES[C03GYM0101] = "C03GYM0101";
		AREA_NAMES[C03PC0101] = "C03PC0101";
		AREA_NAMES[C03PC0102] = "C03PC0102";
		AREA_NAMES[C03PC0103] = "C03PC0103";
		AREA_NAMES[C03R0101] = "C03R0101";
		AREA_NAMES[C03R0102] = "C03R0102";
		AREA_NAMES[C03R0201] = "C03R0201";
		AREA_NAMES[C03R0202] = "C03R0202";
		AREA_NAMES[C03R0301] = "C03R0301";
		AREA_NAMES[C03R0401] = "C03R0401";
		AREA_NAMES[C03R0501] = "C03R0501";
		AREA_NAMES[C03R0601] = "C03R0601";
		AREA_NAMES[C03R0602] = "C03R0602";
		AREA_NAMES[C03R0701] = "C03R0701";
		AREA_NAMES[C04] = "C04";
		AREA_NAMES[C04FS0101] = "C04FS0101";
		AREA_NAMES[C04GYM0101] = "C04GYM0101";
		AREA_NAMES[C04GYM0102] = "C04GYM0102";
		AREA_NAMES[C04PC0101] = "C04PC0101";
		AREA_NAMES[C04PC0102] = "C04PC0102";
		AREA_NAMES[C04PC0103] = "C04PC0103";
		AREA_NAMES[C04R0101] = "C04R0101";
		AREA_NAMES[C04R0201] = "C04R0201";
		AREA_NAMES[C04R0202] = "C04R0202";
		AREA_NAMES[C04R0203] = "C04R0203";
		AREA_NAMES[C04R0204] = "C04R0204";
		AREA_NAMES[C04R0301] = "C04R0301";
		AREA_NAMES[C04R0302] = "C04R0302";
		AREA_NAMES[C04R0303] = "C04R0303";
		AREA_NAMES[C04R0401] = "C04R0401";
		AREA_NAMES[C04R0501] = "C04R0501";
		AREA_NAMES[C04R0601] = "C04R0601";
		AREA_NAMES[C04R0701] = "C04R0701";
		AREA_NAMES[C04R0801] = "C04R0801";
		AREA_NAMES[C05] = "C05";
		AREA_NAMES[C05FS0101] = "C05FS0101";
		AREA_NAMES[C05GYM0101] = "C05GYM0101";
		AREA_NAMES[C05GYM0102] = "C05GYM0102";
		AREA_NAMES[C05GYM0103] = "C05GYM0103";
		AREA_NAMES[C05GYM0104] = "C05GYM0104";
		AREA_NAMES[C05GYM0105] = "C05GYM0105";
		AREA_NAMES[C05GYM0106] = "C05GYM0106";
		AREA_NAMES[C05GYM0107] = "C05GYM0107";
		AREA_NAMES[C05GYM0108] = "C05GYM0108";
		AREA_NAMES[C05GYM0109] = "C05GYM0109";
		AREA_NAMES[C05GYM0110] = "C05GYM0110";
		AREA_NAMES[C05GYM0111] = "C05GYM0111";
		AREA_NAMES[C05GYM0112] = "C05GYM0112";
		AREA_NAMES[C05GYM0113] = "C05GYM0113";
		AREA_NAMES[C05PC0101] = "C05PC0101";
		AREA_NAMES[C05PC0102] = "C05PC0102";
		AREA_NAMES[C05PC0103] = "C05PC0103";
		AREA_NAMES[C05R0101] = "C05R0101";
		AREA_NAMES[C05R0102] = "C05R0102";
		AREA_NAMES[C05R0103] = "C05R0103";
		AREA_NAMES[C05R0201] = "C05R0201";
		AREA_NAMES[C05R0301] = "C05R0301";
		AREA_NAMES[C05R0401] = "C05R0401";
		AREA_NAMES[C05R0501] = "C05R0501";
		AREA_NAMES[C05R0601] = "C05R0601";
		AREA_NAMES[C05R0701] = "C05R0701";
		AREA_NAMES[C05R0801] = "C05R0801";
		AREA_NAMES[C05R0802] = "C05R0802";
		AREA_NAMES[C05R0803] = "C05R0803";
		AREA_NAMES[C05R0901] = "C05R0901";
		AREA_NAMES[C05R1001] = "C05R1001";
		AREA_NAMES[C05R1101] = "C05R1101";
		AREA_NAMES[C05R1102] = "C05R1102";
		AREA_NAMES[C05R1103] = "C05R1103";
		AREA_NAMES[C05R1201] = "C05R1201";
		AREA_NAMES[C06] = "C06";
		AREA_NAMES[C06FS0101] = "C06FS0101";
		AREA_NAMES[C06GYM0101] = "C06GYM0101";
		AREA_NAMES[C06PC0101] = "C06PC0101";
		AREA_NAMES[C06PC0102] = "C06PC0102";
		AREA_NAMES[C06PC0103] = "C06PC0103";
		AREA_NAMES[C06R0101] = "C06R0101";
		AREA_NAMES[C06R0102] = "C06R0102";
		AREA_NAMES[C06R0201] = "C06R0201";
		AREA_NAMES[C06R0301] = "C06R0301";
		AREA_NAMES[C06R0401] = "C06R0401";
		AREA_NAMES[C06R0501] = "C06R0501";
		AREA_NAMES[C06R0601] = "C06R0601";
		AREA_NAMES[C07] = "C07";
		AREA_NAMES[C07GYM0101] = "C07GYM0101";
		AREA_NAMES[C07PC0101] = "C07PC0101";
		AREA_NAMES[C07PC0102] = "C07PC0102";
		AREA_NAMES[C07PC0103] = "C07PC0103";
		AREA_NAMES[C07R0101] = "C07R0101";
		AREA_NAMES[C07R0201] = "C07R0201";
		AREA_NAMES[C07R0202] = "C07R0202";
		AREA_NAMES[C07R0203] = "C07R0203";
		AREA_NAMES[C07R0204] = "C07R0204";
		AREA_NAMES[C07R0205] = "C07R0205";
		AREA_NAMES[C07R0206] = "C07R0206";
		AREA_NAMES[C07R0301] = "C07R0301";
		AREA_NAMES[C07R0401] = "C07R0401";
		AREA_NAMES[C07R0501] = "C07R0501";
		AREA_NAMES[C07R0601] = "C07R0601";
		AREA_NAMES[C07R0701] = "C07R0701";
		AREA_NAMES[C07R0801] = "C07R0801";
		AREA_NAMES[C07R0901] = "C07R0901";
		AREA_NAMES[C08] = "C08";
		AREA_NAMES[C08FS0101] = "C08FS0101";
		AREA_NAMES[C08GYM0101] = "C08GYM0101";
		AREA_NAMES[C08GYM0102] = "C08GYM0102";
		AREA_NAMES[C08GYM0103] = "C08GYM0103";
		AREA_NAMES[C08PC0101] = "C08PC0101";
		AREA_NAMES[C08PC0102] = "C08PC0102";
		AREA_NAMES[C08PC0103] = "C08PC0103";
		AREA_NAMES[C08R0101] = "C08R0101";
		AREA_NAMES[C08R0201] = "C08R0201";
		AREA_NAMES[C08R0301] = "C08R0301";
		AREA_NAMES[C08R0401] = "C08R0401";
		AREA_NAMES[C08R0501] = "C08R0501";
		AREA_NAMES[C08R0601] = "C08R0601";
		AREA_NAMES[C08R0701] = "C08R0701";
		AREA_NAMES[C08R0801] = "C08R0801";
		AREA_NAMES[C08R0802] = "C08R0802";
		AREA_NAMES[C09] = "C09";
		AREA_NAMES[C09FS0101] = "C09FS0101";
		AREA_NAMES[C09GYM0101] = "C09GYM0101";
		AREA_NAMES[C09PC0101] = "C09PC0101";
		AREA_NAMES[C09PC0102] = "C09PC0102";
		AREA_NAMES[C09PC0103] = "C09PC0103";
		AREA_NAMES[C09R0101] = "C09R0101";
		AREA_NAMES[C09R0201] = "C09R0201";
		AREA_NAMES[C10] = "C10";
		AREA_NAMES[C10PC0101] = "C10PC0101";
		AREA_NAMES[C10PC0102] = "C10PC0102";
		AREA_NAMES[C10PC0103] = "C10PC0103";
		AREA_NAMES[C10R0101] = "C10R0101";
		AREA_NAMES[C10R0102] = "C10R0102";
		AREA_NAMES[C10R0103] = "C10R0103";
		AREA_NAMES[C10R0104] = "C10R0104";
		AREA_NAMES[C10R0105] = "C10R0105";
		AREA_NAMES[C10R0106] = "C10R0106";
		AREA_NAMES[C10R0107] = "C10R0107";
		AREA_NAMES[C10R0108] = "C10R0108";
		AREA_NAMES[C10R0109] = "C10R0109";
		AREA_NAMES[C10R0110] = "C10R0110";
		AREA_NAMES[C10R0111] = "C10R0111";
		AREA_NAMES[C10R0112] = "C10R0112";
		AREA_NAMES[C10R0113] = "C10R0113";
		AREA_NAMES[C10R0114] = "C10R0114";
		AREA_NAMES[C10R0115] = "C10R0115";
		AREA_NAMES[C11] = "C11";
		AREA_NAMES[C11FS0101] = "C11FS0101";
		AREA_NAMES[C11PC0101] = "C11PC0101";
		AREA_NAMES[C11PC0102] = "C11PC0102";
		AREA_NAMES[C11PC0103] = "C11PC0103";
		AREA_NAMES[C11R0101] = "C11R0101";
		AREA_NAMES[C11R0201] = "C11R0201";
		AREA_NAMES[C11R0301] = "C11R0301";
		AREA_NAMES[C11R0401] = "C11R0401";
		AREA_NAMES[D01R0101] = "D01R0101";
		AREA_NAMES[D01R0102] = "D01R0102";
		AREA_NAMES[D02] = "D02";
		AREA_NAMES[D02R0101] = "D02R0101";
		AREA_NAMES[D03] = "D03";
		AREA_NAMES[D03R0101] = "D03R0101";
		AREA_NAMES[D04] = "D04";
		AREA_NAMES[D04R0101] = "D04R0101";
		AREA_NAMES[D05R0101] = "D05R0101";
		AREA_NAMES[D05R0102] = "D05R0102";
		AREA_NAMES[D05R0103] = "D05R0103";
		AREA_NAMES[D05R0104] = "D05R0104";
		AREA_NAMES[D05R0105] = "D05R0105";
		AREA_NAMES[D05R0106] = "D05R0106";
		AREA_NAMES[D05R0107] = "D05R0107";
		AREA_NAMES[D05R0108] = "D05R0108";
		AREA_NAMES[D05R0109] = "D05R0109";
		AREA_NAMES[D05R0110] = "D05R0110";
		AREA_NAMES[D05R0111] = "D05R0111";
		AREA_NAMES[D05R0112] = "D05R0112";
		AREA_NAMES[D05R0113] = "D05R0113";
		AREA_NAMES[D05R0114] = "D05R0114";
		AREA_NAMES[D05R0115] = "D05R0115";
		AREA_NAMES[D05R0116] = "D05R0116";
		AREA_NAMES[D06R0201] = "D06R0201";
		AREA_NAMES[D06R0202] = "D06R0202";
		AREA_NAMES[D06R0203] = "D06R0203";
		AREA_NAMES[D06R0204] = "D06R0204";
		AREA_NAMES[D06R0205] = "D06R0205";
		AREA_NAMES[D06R0206] = "D06R0206";
		AREA_NAMES[D07R0101] = "D07R0101";
		AREA_NAMES[D07R0102] = "D07R0102";
		AREA_NAMES[D07R0103] = "D07R0103";
		AREA_NAMES[D07R0104] = "D07R0104";
		AREA_NAMES[D07R0105] = "D07R0105";
		AREA_NAMES[D07R0106] = "D07R0106";
		AREA_NAMES[D07R0107] = "D07R0107";
		AREA_NAMES[D07R0108] = "D07R0108";
		AREA_NAMES[D07R0109] = "D07R0109";
		AREA_NAMES[D07R0110] = "D07R0110";
		AREA_NAMES[D07R0111] = "D07R0111";
		AREA_NAMES[D07R0112] = "D07R0112";
		AREA_NAMES[D07R0113] = "D07R0113";
		AREA_NAMES[D07R0114] = "D07R0114";
		AREA_NAMES[D07R0115] = "D07R0115";
		AREA_NAMES[D07R0116] = "D07R0116";
		AREA_NAMES[D07R0117] = "D07R0117";
		AREA_NAMES[D07R0118] = "D07R0118";
		AREA_NAMES[D07R0119] = "D07R0119";
		AREA_NAMES[D09R0101] = "D09R0101";
		AREA_NAMES[D09R0102] = "D09R0102";
		AREA_NAMES[D09R0103] = "D09R0103";
		AREA_NAMES[D09R0104] = "D09R0104";
		AREA_NAMES[D09R0105] = "D09R0105";
		AREA_NAMES[D09R0106] = "D09R0106";
		AREA_NAMES[D10R0101] = "D10R0101";
		AREA_NAMES[D11R0101] = "D11R0101";
		AREA_NAMES[D12R0101] = "D12R0101";
		AREA_NAMES[D13R0101] = "D13R0101";
		AREA_NAMES[D13R0102] = "D13R0102";
		AREA_NAMES[D14R0101] = "D14R0101";
		AREA_NAMES[D14R0102] = "D14R0102";
		AREA_NAMES[D15] = "D15";
		AREA_NAMES[D15R0101] = "D15R0101";
		AREA_NAMES[D16] = "D16";
		AREA_NAMES[D16R0101] = "D16R0101";
		AREA_NAMES[D16R0102] = "D16R0102";
		AREA_NAMES[D16R0103] = "D16R0103";
		AREA_NAMES[D17R0101] = "D17R0101";
		AREA_NAMES[D17R0102] = "D17R0102";
		AREA_NAMES[D17R0103] = "D17R0103";
		AREA_NAMES[D17R0104] = "D17R0104";
		AREA_NAMES[D17R0105] = "D17R0105";
		AREA_NAMES[D17R0106] = "D17R0106";
		AREA_NAMES[D17R0107] = "D17R0107";
		AREA_NAMES[D17R0108] = "D17R0108";
		AREA_NAMES[D17R0109] = "D17R0109";
		AREA_NAMES[D17R0110] = "D17R0110";
		AREA_NAMES[D17R0111] = "D17R0111";
		AREA_NAMES[D17R0112] = "D17R0112";
		AREA_NAMES[D17R0113] = "D17R0113";
		AREA_NAMES[D17R0114] = "D17R0114";
		AREA_NAMES[D17R0115] = "D17R0115";
		AREA_NAMES[D17R0116] = "D17R0116";
		AREA_NAMES[D17R0117] = "D17R0117";
		AREA_NAMES[D17R0118] = "D17R0118";
		AREA_NAMES[D17R0119] = "D17R0119";
		AREA_NAMES[D17R0120] = "D17R0120";
		AREA_NAMES[D17R0121] = "D17R0121";
		AREA_NAMES[D17R0122] = "D17R0122";
		AREA_NAMES[D18] = "D18";
		AREA_NAMES[D20R0101] = "D20R0101";
		AREA_NAMES[D20R0102] = "D20R0102";
		AREA_NAMES[D20R0103] = "D20R0103";
		AREA_NAMES[D20R0104] = "D20R0104";
		AREA_NAMES[D20R0105] = "D20R0105";
		AREA_NAMES[D20R0106] = "D20R0106";
		AREA_NAMES[D21R0101] = "D21R0101";
		AREA_NAMES[D21R0102] = "D21R0102";
		AREA_NAMES[D22R0101] = "D22R0101";
		AREA_NAMES[D22R0102] = "D22R0102";
		AREA_NAMES[D22R0103] = "D22R0103";
		AREA_NAMES[D23R0101] = "D23R0101";
		AREA_NAMES[D24] = "D24";
		AREA_NAMES[D24R0101] = "D24R0101";
		AREA_NAMES[D24R0102] = "D24R0102";
		AREA_NAMES[D24R0103] = "D24R0103";
		AREA_NAMES[D24R0104] = "D24R0104";
		AREA_NAMES[D24R0105] = "D24R0105";
		AREA_NAMES[D24R0106] = "D24R0106";
		AREA_NAMES[D24R0201] = "D24R0201";
		AREA_NAMES[D25R0101] = "D25R0101";
		AREA_NAMES[D25R0102] = "D25R0102";
		AREA_NAMES[D25R0103] = "D25R0103";
		AREA_NAMES[D25R0104] = "D25R0104";
		AREA_NAMES[D25R0105] = "D25R0105";
		AREA_NAMES[D25R0106] = "D25R0106";
		AREA_NAMES[D25R0107] = "D25R0107";
		AREA_NAMES[D25R0108] = "D25R0108";
		AREA_NAMES[D25R0109] = "D25R0109";
		AREA_NAMES[D26R0101] = "D26R0101";
		AREA_NAMES[D26R0102] = "D26R0102";
		AREA_NAMES[D26R0103] = "D26R0103";
		AREA_NAMES[D26R0104] = "D26R0104";
		AREA_NAMES[D26R0105] = "D26R0105";
		AREA_NAMES[D26R0106] = "D26R0106";
		AREA_NAMES[D26R0107] = "D26R0107";
		AREA_NAMES[D26R0108] = "D26R0108";
		AREA_NAMES[D27R0101] = "D27R0101";
		AREA_NAMES[D27R0102] = "D27R0102";
		AREA_NAMES[D27R0103] = "D27R0103";
		AREA_NAMES[D28R0101] = "D28R0101";
		AREA_NAMES[D28R0102] = "D28R0102";
		AREA_NAMES[D28R0103] = "D28R0103";
		AREA_NAMES[D29R0101] = "D29R0101";
		AREA_NAMES[D29R0102] = "D29R0102";
		AREA_NAMES[D29R0103] = "D29R0103";
		AREA_NAMES[D30] = "D30";
		AREA_NAMES[D30R0101] = "D30R0101";
		AREA_NAMES[D31] = "D31";
		AREA_NAMES[D31R0101] = "D31R0101";
		AREA_NAMES[D31R0201] = "D31R0201";
		AREA_NAMES[D31R0202] = "D31R0202";
		AREA_NAMES[D31R0203] = "D31R0203";
		AREA_NAMES[D31R0204] = "D31R0204";
		AREA_NAMES[D31R0205] = "D31R0205";
		AREA_NAMES[D31R0206] = "D31R0206";
		AREA_NAMES[D31R0207] = "D31R0207";
		AREA_NAMES[DIRECT2] = "DIRECT2";
		AREA_NAMES[DIRECT4] = "DIRECT4";
		AREA_NAMES[EVERYWHERE] = "EVERYWHERE";
		AREA_NAMES[L01] = "L01";
		AREA_NAMES[L02] = "L02";
		AREA_NAMES[L02R0101] = "L02R0101";
		AREA_NAMES[L02R0201] = "L02R0201";
		AREA_NAMES[L02R0301] = "L02R0301";
		AREA_NAMES[L03] = "L03";
		AREA_NAMES[L04] = "L04";
		AREA_NAMES[NOTHING] = "NOTHING";
		AREA_NAMES[R201] = "R201";
		AREA_NAMES[R202] = "R202";
		AREA_NAMES[R203] = "R203";
		AREA_NAMES[R204A] = "R204A";
		AREA_NAMES[R204B] = "R204B";
		AREA_NAMES[R205A] = "R205A";
		AREA_NAMES[R205AR0101] = "R205AR0101";
		AREA_NAMES[R205B] = "R205B";
		AREA_NAMES[R206] = "R206";
		AREA_NAMES[R206R0101] = "R206R0101";
		AREA_NAMES[R207] = "R207";
		AREA_NAMES[R208] = "R208";
		AREA_NAMES[R208R0101] = "R208R0101";
		AREA_NAMES[R209] = "R209";
		AREA_NAMES[R209R0101] = "R209R0101";
		AREA_NAMES[R209R0102] = "R209R0102";
		AREA_NAMES[R209R0103] = "R209R0103";
		AREA_NAMES[R209R0104] = "R209R0104";
		AREA_NAMES[R209R0105] = "R209R0105";
		AREA_NAMES[R210A] = "R210A";
		AREA_NAMES[R210AR0101] = "R210AR0101";
		AREA_NAMES[R210B] = "R210B";
		AREA_NAMES[R210BR0101] = "R210BR0101";
		AREA_NAMES[R211A] = "R211A";
		AREA_NAMES[R211B] = "R211B";
		AREA_NAMES[R212A] = "R212A";
		AREA_NAMES[R212AR0101] = "R212AR0101";
		AREA_NAMES[R212AR0102] = "R212AR0102";
		AREA_NAMES[R212AR0103] = "R212AR0103";
		AREA_NAMES[R212B] = "R212B";
		AREA_NAMES[R212BR0101] = "R212BR0101";
		AREA_NAMES[R213] = "R213";
		AREA_NAMES[R213R0101] = "R213R0101";
		AREA_NAMES[R213R0201] = "R213R0201";
		AREA_NAMES[R213R0301] = "R213R0301";
		AREA_NAMES[R213R0401] = "R213R0401";
		AREA_NAMES[R213R0501] = "R213R0501";
		AREA_NAMES[R213R0601] = "R213R0601";
		AREA_NAMES[R214] = "R214";
		AREA_NAMES[R214R0101] = "R214R0101";
		AREA_NAMES[R215] = "R215";
		AREA_NAMES[R216] = "R216";
		AREA_NAMES[R216R0101] = "R216R0101";
		AREA_NAMES[R217] = "R217";
		AREA_NAMES[R217R0101] = "R217R0101";
		AREA_NAMES[R217R0201] = "R217R0201";
		AREA_NAMES[R218] = "R218";
		AREA_NAMES[R218R0101] = "R218R0101";
		AREA_NAMES[R218R0201] = "R218R0201";
		AREA_NAMES[R219] = "R219";
		AREA_NAMES[R221] = "R221";
		AREA_NAMES[R221R0101] = "R221R0101";
		AREA_NAMES[R221R0201] = "R221R0201";
		AREA_NAMES[R222] = "R222";
		AREA_NAMES[R222R0101] = "R222R0101";
		AREA_NAMES[R222R0201] = "R222R0201";
		AREA_NAMES[R222R0301] = "R222R0301";
		AREA_NAMES[R224] = "R224";
		AREA_NAMES[R225] = "R225";
		AREA_NAMES[R225R0101] = "R225R0101";
		AREA_NAMES[R227] = "R227";
		AREA_NAMES[R227R0101] = "R227R0101";
		AREA_NAMES[R228] = "R228";
		AREA_NAMES[R228R0101] = "R228R0101";
		AREA_NAMES[R228R0201] = "R228R0201";
		AREA_NAMES[R228R0301] = "R228R0301";
		AREA_NAMES[R229] = "R229";
		AREA_NAMES[RECORD] = "RECORD";
		AREA_NAMES[T01] = "T01";
		AREA_NAMES[T01R0101] = "T01R0101";
		AREA_NAMES[T01R0102] = "T01R0102";
		AREA_NAMES[T01R0201] = "T01R0201";
		AREA_NAMES[T01R0202] = "T01R0202";
		AREA_NAMES[T01R0301] = "T01R0301";
		AREA_NAMES[T01R0401] = "T01R0401";
		AREA_NAMES[T02] = "T02";
		AREA_NAMES[T02FS0101] = "T02FS0101";
		AREA_NAMES[T02PC0101] = "T02PC0101";
		AREA_NAMES[T02PC0102] = "T02PC0102";
		AREA_NAMES[T02PC0103] = "T02PC0103";
		AREA_NAMES[T02R0101] = "T02R0101";
		AREA_NAMES[T02R0201] = "T02R0201";
		AREA_NAMES[T02R0202] = "T02R0202";
		AREA_NAMES[T02R0301] = "T02R0301";
		AREA_NAMES[T03] = "T03";
		AREA_NAMES[T03FS0101] = "T03FS0101";
		AREA_NAMES[T03PC0101] = "T03PC0101";
		AREA_NAMES[T03PC0102] = "T03PC0102";
		AREA_NAMES[T03PC0103] = "T03PC0103";
		AREA_NAMES[T03R0101] = "T03R0101";
		AREA_NAMES[T03R0201] = "T03R0201";
		AREA_NAMES[T03R0301] = "T03R0301";
		AREA_NAMES[T04] = "T04";
		AREA_NAMES[T04FS0101] = "T04FS0101";
		AREA_NAMES[T04PC0101] = "T04PC0101";
		AREA_NAMES[T04PC0102] = "T04PC0102";
		AREA_NAMES[T04PC0103] = "T04PC0103";
		AREA_NAMES[T04R0101] = "T04R0101";
		AREA_NAMES[T04R0201] = "T04R0201";
		AREA_NAMES[T04R0301] = "T04R0301";
		AREA_NAMES[T04R0401] = "T04R0401";
		AREA_NAMES[T04R0501] = "T04R0501";
		AREA_NAMES[T05] = "T05";
		AREA_NAMES[T05PC0101] = "T05PC0101";
		AREA_NAMES[T05PC0102] = "T05PC0102";
		AREA_NAMES[T05PC0103] = "T05PC0103";
		AREA_NAMES[T05R0101] = "T05R0101";
		AREA_NAMES[T05R0201] = "T05R0201";
		AREA_NAMES[T05R0301] = "T05R0301";
		AREA_NAMES[T05R0401] = "T05R0401";
		AREA_NAMES[T05R0501] = "T05R0501";
		AREA_NAMES[T06] = "T06";
		AREA_NAMES[T06FS0101] = "T06FS0101";
		AREA_NAMES[T06PC0101] = "T06PC0101";
		AREA_NAMES[T06PC0102] = "T06PC0102";
		AREA_NAMES[T06PC0103] = "T06PC0103";
		AREA_NAMES[T06R0101] = "T06R0101";
		AREA_NAMES[T06R0201] = "T06R0201";
		AREA_NAMES[T06R0301] = "T06R0301";
		AREA_NAMES[T07] = "T07";
		AREA_NAMES[T07FS0101] = "T07FS0101";
		AREA_NAMES[T07PC0101] = "T07PC0101";
		AREA_NAMES[T07PC0102] = "T07PC0102";
		AREA_NAMES[T07PC0103] = "T07PC0103";
		AREA_NAMES[T07R0101] = "T07R0101";
		AREA_NAMES[T07R0102] = "T07R0102";
		AREA_NAMES[T07R0103] = "T07R0103";
		AREA_NAMES[T07R0201] = "T07R0201";
		AREA_NAMES[T07R0301] = "T07R0301";
		AREA_NAMES[UG] = "UG";
		AREA_NAMES[UNION] = "UNION";
		AREA_NAMES[W220] = "W220";
		AREA_NAMES[W223] = "W223";
		AREA_NAMES[W226] = "W226";
		AREA_NAMES[W226R0101] = "W226R0101";
		AREA_NAMES[W230] = "W230";
		AREA_NAMES[W231] = "W231";
		AREA_NAMES[A01] = "A01";
		AREA_NAMES[A02] = "A02";
		AREA_NAMES[A03] = "A03";
		AREA_NAMES[A04] = "A04";
		AREA_NAMES[A05] = "A05";
		AREA_NAMES[A06] = "A06";
		AREA_NAMES[A07] = "A07";
		AREA_NAMES[A08] = "A08";
		AREA_NAMES[A09] = "A09";
		AREA_NAMES[A10] = "A10";
		AREA_NAMES[A11] = "A11";
		AREA_NAMES[A12] = "A12";
		AREA_NAMES[A13] = "A13";
		AREA_NAMES[A14] = "A14";
		AREA_NAMES[A15] = "A15";
		AREA_NAMES[Safari] = "Safari";
		AREA_NAMES[UNION01] = "UNION01";
		AREA_NAMES[UNION02] = "UNION02";
		AREA_NAMES[UNION03] = "UNION03";
		AREA_NAMES[C04R0205] = "C04R0205";
		AREA_NAMES[D10R0201] = "D10R0201";
		AREA_NAMES[D10R0202] = "D10R0202";
		AREA_NAMES[D10R0301] = "D10R0301";
		AREA_NAMES[D10R0302] = "D10R0302";
		AREA_NAMES[D10R0303] = "D10R0303";
		AREA_NAMES[D10R0401] = "D10R0401";
		AREA_NAMES[D10R0402] = "D10R0402";
		AREA_NAMES[D10R0403] = "D10R0403";
		AREA_NAMES[D10R0501] = "D10R0501";
		AREA_NAMES[D10R0502] = "D10R0502";
		AREA_NAMES[D10R0601] = "D10R0601";
		AREA_NAMES[D10R0701] = "D10R0701";
		AREA_NAMES[D10R0801] = "D10R0801";
		AREA_NAMES[UGA01] = "UGA01";
		AREA_NAMES[UGA02] = "UGA02";
		AREA_NAMES[UGA03] = "UGA03";
		AREA_NAMES[UGA04] = "UGA04";
		AREA_NAMES[UGA05] = "UGA05";
		AREA_NAMES[UGA06] = "UGA06";
		AREA_NAMES[UGA07] = "UGA07";
		AREA_NAMES[UGA08] = "UGA08";
		AREA_NAMES[UGA09] = "UGA09";
		AREA_NAMES[UGA10] = "UGA10";
		AREA_NAMES[UGB01] = "UGB01";
		AREA_NAMES[UGB02] = "UGB02";
		AREA_NAMES[UGB03] = "UGB03";
		AREA_NAMES[UGB04] = "UGB04";
		AREA_NAMES[UGB05] = "UGB05";
		AREA_NAMES[UGB06] = "UGB06";
		AREA_NAMES[UGB07] = "UGB07";
		AREA_NAMES[UGC01] = "UGC01";
		AREA_NAMES[UGD01] = "UGD01";
		AREA_NAMES[UGD02] = "UGD02";
		AREA_NAMES[UGD03] = "UGD03";
		AREA_NAMES[UGD04] = "UGD04";
		AREA_NAMES[UGD05] = "UGD05";
		AREA_NAMES[UGE01] = "UGE01";
		AREA_NAMES[UGE02] = "UGE02";
		AREA_NAMES[UGE03] = "UGE03";
		AREA_NAMES[UGE04] = "UGE04";
		AREA_NAMES[UGE05] = "UGE05";
		AREA_NAMES[UGF01] = "UGF01";
		AREA_NAMES[UGF02] = "UGF02";
		AREA_NAMES[UGF03] = "UGF03";
		AREA_NAMES[UGF04] = "UGF04";
		AREA_NAMES[UGF05] = "UGF05";
		AREA_NAMES[UGF06] = "UGF06";
		AREA_NAMES[UGF07] = "UGF07";
		AREA_NAMES[UGSPACE01] = "UGSPACE01";
		AREA_NAMES[UGSPACE02] = "UGSPACE02";
		AREA_NAMES[UGSPACE03] = "UGSPACE03";
		AREA_NAMES[UGSPACE04] = "UGSPACE04";
		AREA_NAMES[UGSPACE05] = "UGSPACE05";
		AREA_NAMES[UGSPACE06] = "UGSPACE06";
		AREA_NAMES[UGSPACE07] = "UGSPACE07";
		AREA_NAMES[UGSPACE08] = "UGSPACE08";
		AREA_NAMES[UGSPACE09] = "UGSPACE09";
		AREA_NAMES[UGSPACE10] = "UGSPACE10";
		AREA_NAMES[UGSPACE11] = "UGSPACE11";
		AREA_NAMES[UGSPACE12] = "UGSPACE12";
		AREA_NAMES[UGSPACE13] = "UGSPACE13";
		AREA_NAMES[UGSPACE14] = "UGSPACE14";
		AREA_NAMES[UGSPACE15] = "UGSPACE15";
		AREA_NAMES[UGSPACE16] = "UGSPACE16";
		AREA_NAMES[UGSPACE17] = "UGSPACE17";
		AREA_NAMES[UGSPACE18] = "UGSPACE18";
		AREA_NAMES[UGSPACE19] = "UGSPACE19";
		AREA_NAMES[UGSPACE20] = "UGSPACE20";
		AREA_NAMES[UGSPACE21] = "UGSPACE21";
		AREA_NAMES[UGSPACE22] = "UGSPACE22";
		AREA_NAMES[UGSPACE23] = "UGSPACE23";
		AREA_NAMES[UGSPACE24] = "UGSPACE24";
		AREA_NAMES[UGSPACE25] = "UGSPACE25";
		AREA_NAMES[UGSPACE26] = "UGSPACE26";
		AREA_NAMES[UGSPACE27] = "UGSPACE27";
		AREA_NAMES[UGSPACE28] = "UGSPACE28";
		AREA_NAMES[UGSPACE29] = "UGSPACE29";
		AREA_NAMES[UGSPACE30] = "UGSPACE30";
		AREA_NAMES[UGSPACE31] = "UGSPACE31";
		AREA_NAMES[UGSPACE32] = "UGSPACE32";
		AREA_NAMES[UGSPACE33] = "UGSPACE33";
		AREA_NAMES[UGSPACE34] = "UGSPACE34";
		AREA_NAMES[UGSPACE35] = "UGSPACE35";
		AREA_NAMES[UGSPACE36] = "UGSPACE36";
		AREA_NAMES[UGSPACE37] = "UGSPACE37";
		AREA_NAMES[UGSPACE38] = "UGSPACE38";
		AREA_NAMES[UGSPACE39] = "UGSPACE39";
		AREA_NAMES[UGSPACE40] = "UGSPACE40";
		AREA_NAMES[UGSPACE41] = "UGSPACE41";
		AREA_NAMES[UGSPACE42] = "UGSPACE42";
		AREA_NAMES[UGSPACE43] = "UGSPACE43";
		AREA_NAMES[UGSPACE44] = "UGSPACE44";
		AREA_NAMES[UGSPACE45] = "UGSPACE45";
		AREA_NAMES[UGSPACE46] = "UGSPACE46";
		AREA_NAMES[UGSPACE47] = "UGSPACE47";
		AREA_NAMES[UGSPACE48] = "UGSPACE48";
		AREA_NAMES[UGSPACE49] = "UGSPACE49";
		AREA_NAMES[UGSPACE50] = "UGSPACE50";
		AREA_NAMES[UGSPACE51] = "UGSPACE51";
		AREA_NAMES[UGSPACE52] = "UGSPACE52";
		AREA_NAMES[UGSPACE53] = "UGSPACE53";
		AREA_NAMES[UGSPACE54] = "UGSPACE54";
		AREA_NAMES[UGSPACE55] = "UGSPACE55";
		AREA_NAMES[UGSPACE56] = "UGSPACE56";
		AREA_NAMES[UGSPACE57] = "UGSPACE57";
		AREA_NAMES[UGSPACE58] = "UGSPACE58";
		AREA_NAMES[UGSPACE59] = "UGSPACE59";
		AREA_NAMES[UGSPACE60] = "UGSPACE60";
		AREA_NAMES[UGSPACE61] = "UGSPACE61";
		AREA_NAMES[UGSPACE62] = "UGSPACE62";
		AREA_NAMES[UGSPACE63] = "UGSPACE63";
		AREA_NAMES[UGSPACE64] = "UGSPACE64";
		AREA_NAMES[UGSPACE65] = "UGSPACE65";
		AREA_NAMES[UGSPACE66] = "UGSPACE66";
		AREA_NAMES[UGSPACE67] = "UGSPACE67";
		AREA_NAMES[UGSPACE68] = "UGSPACE68";
		AREA_NAMES[UGSPACEL01] = "UGSPACEL01";
		AREA_NAMES[UGSPACEL02] = "UGSPACEL02";
		AREA_NAMES[UGSPACEL03] = "UGSPACEL03";
		AREA_NAMES[UGSPACEL04] = "UGSPACEL04";
		AREA_NAMES[UGSPACEL05] = "UGSPACEL05";
		AREA_NAMES[UGSPACEL06] = "UGSPACEL06";
		AREA_NAMES[UGSPACEL07] = "UGSPACEL07";
		AREA_NAMES[D05R0117] = "D05R0117";
		AREA_NAMES[D10R0901] = "D10R0901";
		AREA_NAMES[UGSECRETBASE01] = "UGSECRETBASE01";
		AREA_NAMES[UGSECRETBASE02] = "UGSECRETBASE02";
		AREA_NAMES[UGSECRETBASE03] = "UGSECRETBASE03";
		AREA_NAMES[UGSECRETBASE04] = "UGSECRETBASE04";
		AREA_NAMES[D10R0902] = "D10R0902";
		AREA_NAMES[SEA01] = "SEA01";
		AREA_NAMES[C01R0209] = "C01R0209";
		AREA_NAMES[UGAASECRETBASE01] = "UGAASECRETBASE01";
		AREA_NAMES[UGAASECRETBASE02] = "UGAASECRETBASE02";
		AREA_NAMES[UGAASECRETBASE03] = "UGAASECRETBASE03";
		AREA_NAMES[UGABSECRETBASE01] = "UGABSECRETBASE01";
		AREA_NAMES[UGABSECRETBASE02] = "UGABSECRETBASE02";
		AREA_NAMES[UGABSECRETBASE03] = "UGABSECRETBASE03";
		AREA_NAMES[UGBASECRETBASE01] = "UGBASECRETBASE01";
		AREA_NAMES[UGBASECRETBASE02] = "UGBASECRETBASE02";
		AREA_NAMES[UGBASECRETBASE03] = "UGBASECRETBASE03";
		AREA_NAMES[UGCASECRETBASE01] = "UGCASECRETBASE01";
		AREA_NAMES[UGCASECRETBASE02] = "UGCASECRETBASE02";
		AREA_NAMES[UGCASECRETBASE03] = "UGCASECRETBASE03";
		AREA_NAMES[UGDASECRETBASE01] = "UGDASECRETBASE01";
		AREA_NAMES[UGDASECRETBASE02] = "UGDASECRETBASE02";
		AREA_NAMES[UGDASECRETBASE03] = "UGDASECRETBASE03";
		AREA_NAMES[UGEASECRETBASE01] = "UGEASECRETBASE01";
		AREA_NAMES[UGEASECRETBASE02] = "UGEASECRETBASE02";
		AREA_NAMES[UGEASECRETBASE03] = "UGEASECRETBASE03";
		AREA_NAMES[UGFASECRETBASE01] = "UGFASECRETBASE01";
		AREA_NAMES[UGFASECRETBASE02] = "UGFASECRETBASE02";
		AREA_NAMES[UGFASECRETBASE03] = "UGFASECRETBASE03";
		AREA_NAMES[D10R0202B] = "D10R0202B";
		AREA_NAMES[D10R0301B] = "D10R0301B";
		AREA_NAMES[D10R0302B] = "D10R0302B";
		AREA_NAMES[D10R0303B] = "D10R0303B";
		AREA_NAMES[D10R0401B] = "D10R0401B";
		AREA_NAMES[D10R0402B] = "D10R0402B";
		AREA_NAMES[D10R0403B] = "D10R0403B";
		AREA_NAMES[D10R0501B] = "D10R0501B";
		AREA_NAMES[D10R0502B] = "D10R0502B";
		AREA_NAMES[D10R0601B] = "D10R0601B";
        AREA_NAMES[D10R0601B] = "D10R0601B";
        AREA_NAMES[NEWAREA] = "NEWAREA";
        initialized_area_names = true;
    }
    return AREA_NAMES;
}

struct AreaID_Fields {
	int32_t value__;
};
struct AreaID_o {
	AreaID_Fields fields;
};

System::String * GetEnumName(long param_1, long *param_2)
{
    socket_log_fmt("GetEnumName: Init");
    int id = ((AreaID_o *)param_2)->fields.value__;
    char buff[100];
    snprintf(buff, sizeof(buff), "%08X", id);
    std::string id_str = buff;

    if (id >= 0 && id < NUM_AREA_ID)
    {
        socket_log_fmt("  GetEnumName: ID (" + id_str + ") OK");
        System::String * label = System::String::CreateString(getAreaNames()[id].c_str());
        socket_log_fmt("  GetEnumName: Area Name is " + getAreaNames()[id]);
        _system_array_init(label);
        return label;
    }
    else
    {
        socket_log_fmt("  GetEnumName: ID (" + id_str + ") BAD");
        System::String * label = System::String::CreateString("");
        _system_array_init(label);
        return label;
    }
}