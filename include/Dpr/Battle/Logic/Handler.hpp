#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            namespace Handler
            {
                struct Waza_HandlerGetFunc_Fields {
                    System_MulticastDelegate_Fields super;
                };

                struct Waza_HandlerGetFunc_c;

                struct Waza_HandlerGetFunc_o {
                    void ctor(intptr_t m_target, MethodInfo * method);
                    void ctor(Il2CppMethodPointer methodPointer);
                    Waza_HandlerGetFunc_c *klass;
                    void *monitor;
                    Waza_HandlerGetFunc_Fields fields;
                };

                struct Waza_GET_FUNC_TABLE_ELEM_Fields {
                    int32_t waza;
                    struct Waza_HandlerGetFunc_o* func;
                };
            
                struct Waza_GET_FUNC_TABLE_ELEM_o {
                    static void ctor(Waza_GET_FUNC_TABLE_ELEM_o __this, int32_t waza,
                                     Waza_HandlerGetFunc_o *func, MethodInfo *method);
                    
                    Waza_GET_FUNC_TABLE_ELEM_Fields fields;
                };

                struct Waza_handler_JitabataTableElem_array;
                struct Waza_GetCombiWazaTypeTableElem_array;

                struct Waza_StaticFields {
                    System::Array<Waza_GET_FUNC_TABLE_ELEM_o> * GET_FUNC_TABLE;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Texture;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TrickRoom;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Juryoku;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Kiribarai;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Kawarawari;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tobigeri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Monomane;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Sketch;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KonoyubiTomare;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Ikarinokona;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KumoNoSu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KuroiKiri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Haneru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Oiwai;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TeWoTunagu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Noroi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Denjiha;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_NayamiNoTane;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Yumekui;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TriAttack;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Nettou;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_UtakatanoAria;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Osyaberi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Makituku;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Uzusio;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_IkariNoMaeba;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Gamusyara;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TikyuuNage;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Takuwaeru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Hakidasu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Nomikomu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Counter;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MilerCoat;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MetalBurst;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Totteoki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Ibiki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Fuiuti;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Daibakuhatsu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Kiaidame;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Juden;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_HorobiNoUta;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_YadorigiNoTane;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_NekoNiKoban;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_AquaRing;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Abareru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Sawagu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Korogaru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TripleKick;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_GyroBall;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Revenge;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Jitabata;
                    Waza_handler_JitabataTableElem_array * handler_JitabataTable;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Karagenki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Sippegaesi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Funka;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Siboritoru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Siomizu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_RenzokuGiri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Dameosi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Ketaguri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_WeatherBall;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tatumaki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Kaminari;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Fubuki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_ZettaiReido;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Jisin;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SabakiNoTubute;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MultiAttack;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TechnoBaster;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MezameruPower;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Hatakiotosu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MagicCoat;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Dorobou;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Trick;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Naminori;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Fumituke;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_DaiMaxHou;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Mineuti;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Koraeru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Mamoru;
                    System::Array<uint16_t> * WazaTable_Mamoru;
                    System::Array<uint16_t> * RandRangeTable_Mamoru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Recycle;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_PsycoShift;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Itamiwake;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Haradaiko;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Feint;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_IjigenHall;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TuboWoTuku;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Nemuru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Meromero;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Texture2;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Encore;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Chouhatu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Kanasibari;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Present;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Fuuin;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Alomatherapy;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_IyasiNoSuzu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Okimiyage;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Urami;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_JikoAnji;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_HeartSwap;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_PowerSwap;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_GuardSwap;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_PowerTrick;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_PowerShare;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_GuardShare;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_LockON;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Dokudoku;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Reflector;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_HikariNoKabe;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SinpiNoMamori;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SiroiKiri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Oikaze;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Makibisi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Dokubisi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_StealthRock;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_NebaNebaNet;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_WideGuard;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TatamiGaeshi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Hensin;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MikadukiNoMai;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_IyasiNoNegai;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Negaigoto;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Miraiyoti;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_HametuNoNegai;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Ieki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Narikiri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TonboGaeri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KousokuSpin;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_BatonTouch;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Teleport;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Nagetukeru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_DenjiFuyuu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tedasuke;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FukuroDataki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Nekodamasi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Deaigasira;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_AsaNoHizasi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Sunaatume;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FlowerHeal;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SoraWoTobu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_ShadowDive;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tobihaneru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Diving;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_AnaWoHoru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SolarBeam;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_GodBird;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_RocketZutuki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tuibamu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Hoobaru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Waruagaki;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Michidure;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Onnen;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tiisakunaru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Marukunaru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Haneyasume;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KiaiPunch;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_YubiWoFuru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SizenNoTikara;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Negoto;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Manekko;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_GensiNoTikara;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_BenomShock;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tatarime;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Acrobat;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_AsistPower;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_HeavyBomber;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_HeatStamp;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_ElectBall;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_EchoVoice;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Katakiuti;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Ikasama;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_BodyPress;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Mizubitasi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MahouNoKona;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SimpleBeem;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_NakamaDukuri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_ClearSmog;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Yakitukusu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TomoeNage;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Hoeru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Utiotosu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KarawoYaburu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MirrorType;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_BodyPurge;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_PsycoShock;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_NasiKuzusi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_WonderRoom;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MagicRoom;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Inotigake;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_OsakiniDouzo;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Sakiokuri;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Rinsyou;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FastGuard;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SideChange;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_CourtChange;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_InisieNoUta;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Seityou;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FreezeBolt;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FlameSoul;
                    Waza_GetCombiWazaTypeTableElem_array * CombiTbl;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_CombiWazaCommon;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Halloween;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Morinonoroi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FlowerGuard;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TodomeBari;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KogoeruHadou;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Hikkurikaesu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_NeraiPunch;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SuteZerifu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FlyingPress;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FreezDry;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Souden;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_GrassField;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MistField;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_ElecField;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_PhychoField;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KingShield;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Blocking;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_ThousanArrow;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_HappyTime;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_ZibaSousa;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_BenomTrap;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_PlasmaFist;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_FairyLock;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Funjin;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_GeoControl;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TrickGuard;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_NeedleGuard;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SouthernWave;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_IjigenRush;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_AuraGuruma;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_DarkHole;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tootika;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MezameruDance;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Kahundango;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_CorePunisher;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Kagenui;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Kuraituku;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TakoGatame;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Zyouka;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Tikarawosuitoru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Togisumasu;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SpeedSwap;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Moetukiru;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_KutibasiCanon;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TrapShell;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Zidanda;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_AuroraVeil;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Saihai;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_MeteorDrive;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_ShadowSteal;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_PhotonGeyser;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Hanabisenyou;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_DaiWall;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_NeraiUti;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_HaisuiNoJin;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_SoulBeat;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Ochakai;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_DengekiKutibasi;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_TarShot;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_DragonArrow;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_InotiNoSizuku;
                    System::Array<EventFactor_EventHandlerTable_o> * HandlerTable_Newton;
                };

                struct Waza_Fields {
                };

                struct Waza_RGCTXs {
                };

                struct Waza_VTable {
                    VirtualInvokeData _0_Equals;
                    VirtualInvokeData _1_Finalize;
                    VirtualInvokeData _2_GetHashCode;
                    VirtualInvokeData _3_ToString;
                };

                struct Waza_c {
                    Il2CppClass_1 _1;
                    struct Waza_StaticFields * static_fields;
                    Waza_RGCTXs* rgctx_data;
                    Il2CppClass_2 _2;
                    Waza_VTable vtable;
                };

                extern Waza_c * Waza_TypeInfo;
                extern void * Waza_HandlerGetFunc_TypeInfo;

                extern MethodInfo * Method_ADD_Karagenki;
            }
        }
    }
}