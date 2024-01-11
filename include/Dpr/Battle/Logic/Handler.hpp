#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "Dpr/Battle/Logic/BTL_SICKCONT.hpp"

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

                struct Waza_o {
                    // 18114a0
                    static bool common_SideEffectCore(EventFactor_EventHandlerArgs_o ** args, uint8_t pokeID, int32_t side, int32_t effect, BTL_SICKCONT_o * cont, 
                                                int32_t strType, uint32_t strID, int32_t strArg, bool replaceStrArg0ByExpandSide, MethodInfo * method);
                    static bool common_CureFriendPokeSick(EventFactor_EventHandlerArgs_o **args, uint8_t attackerID, bool excludeOutOfWazaTarget, bool canWriteGenFlag, MethodInfo *method);

                    static void handler_Jisin_damage(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method);
                    static void handler_Jisin_checkHide(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method);


                    Waza_c *klass;
                    void *monitor;
                    Waza_Fields fields;
                };

                struct Pml_WazaData_WazaRankEffect_array;
                struct Tokusei_ultraForce_GetEffectRankTypeTableElem_array;


                struct Tokusei_HandlerGetFunc_Fields {
                    System_MulticastDelegate_Fields super;
                };

                struct Tokusei_HandlerGetFunc_c;

                struct Tokusei_HandlerGetFunc_o {
                    // 17f9150
                    void ctor(intptr_t m_target, MethodInfo * method);
                    Tokusei_HandlerGetFunc_c *klass;
                    void *monitor;
                    Tokusei_HandlerGetFunc_Fields fields;
                };

                struct Tokusei_GET_FUNC_TABLE_ELEM_Fields {
                    int32_t tokusei;
                    struct Tokusei_HandlerGetFunc_o* func;
                };

                struct Tokusei_GET_FUNC_TABLE_ELEM_o {
                    Tokusei_GET_FUNC_TABLE_ELEM_Fields fields;
                };

                struct Tokusei_StaticFields {
                    System::Array<Tokusei_GET_FUNC_TABLE_ELEM_o> * GET_FUNC_TABLE;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Ikaku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Seisinryoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Fukutsuno;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_AtuiSibou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tikaramoti;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Suisui;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Youryokuso;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Hayaasi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tidoriasi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Harikiri;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Atodasi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SlowStart;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Fukugan;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Sunagakure;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Yukigakure;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Iromegane;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HardRock;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Sniper;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kasoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tekiouryoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Mouka;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Gekiryu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Sinryoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MusinoSirase;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Konjou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Plus;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FlowerGift;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tousousin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Technician;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_TetunoKobusi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Stemi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FusiginaUroko;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SkillLink;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_KairikiBasami;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Surudoime;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_ClearBody;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tanjun;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_LeafGuard;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Juunan;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Fumin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MagumaNoYoroi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Meneki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MizuNoBale;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MyPace;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Donkan;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_PastelVeil;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Amefurasi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Hideri;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Sunaokosi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Sunahaki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Yukifurasi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Hajimarinoumi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Owarinodaiti;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_DeltaStream;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_AirLock;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_IcoBody;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_AmeukeZara;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SunPower;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Rinpun;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_TennoMegumi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_UruoiBody;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Dappi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_PoisonHeal;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_KabutoArmor;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kyouun;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_IkarinoTubo;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_DokunoToge;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Seidenki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HonoNoKarada;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MeromeroBody;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Housi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Samehada;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Yuubaku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HorobiNoSango;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Hensyoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Syncro;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Isiatama;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_NormalSkin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Trace;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SizenKaifuku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_DownLoad;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Yotimu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_KikenYoti;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Omitoosi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Ganjou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tennen;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tainetu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kansouhada;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_PunkRock;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tyosui;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tikuden;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_DenkiEngine;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kimottama;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Bouon;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Fuyuu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FusiginaMamori;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Namake;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Simerike;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Moraibi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Nightmare;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Nigeasi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Katayaburi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tenkiya;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Yobimizu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Hiraisin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kyuuban;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HedoroEki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Bukiyou;
                    System::Array<uint16_t> * IgnoreItems_Bukiyou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Nenchaku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Pressure;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MagicGuard;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Akusyuu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kagefumi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Arijigoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Jiryoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Karuwaza;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Monohiroi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_TamaHiroi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_WaruiTeguse;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_NorowareBody;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_KudakeruYoroi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Tikarazuku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Makenki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Katiki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Yowaki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MultiScale;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FriendGuard;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_IyasiNoKokoro;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Dokubousou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Netubousou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Telepassy;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Murakke;
                    Pml_WazaData_WazaRankEffect_array* handler_MurakkeTable;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Boujin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Dokusyu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SaiseiRyoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Hatomune;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Sunakaki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MilacreSkin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Analyze;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SunanoTikara;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Surinuke;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_BarrierFree;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_JisinKajou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_UltraForce;
                    Tokusei_ultraForce_GetEffectRankTypeTableElem_array* RANK_VALUE_TABLE;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SeiginoKokoro;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Bibiri;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_JyoukiKikan;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Watage;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Miira;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SamayouTamasii;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Sousyoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_ItazuraGokoro;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MagicMirror;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Syuukaku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HeavyMetal;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_LightMetal;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Amanojaku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kinchoukan;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_KagakuHenkaGas;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Jukusei;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kawarimono;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Illusion;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_GoodLuck;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MentalVeil;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FlowerVeil;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SweetVeil;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MirrorArmor;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HooBukuro;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HengenZizai;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_DarkAura;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FairyAura;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_AuraBreak;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_GanjouAgo;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Gorimuchu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FurCoat;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_KusaNoKegawa;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_NumeNume;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_KataiTume;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SkySkin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FairySkin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_FreezSkin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MegaLauncher;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HayateNoTsubasa;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Boudan;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_OyakoAi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Magician;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Kyousei;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Zikyuuryoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Mizugatame;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Suihou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Yukikaki;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Haganetukai;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HaganeNoSeisin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_UruoiVoice;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HealingShift;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_ElecSkin;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SurfTail;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Hitodenasi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Enkaku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Zyoounoigen;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MohuMohu;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_KooriNoRinpun;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Battery;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_PowerSpot;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Receiver;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_TobidasuNakami;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Gyakuzyou;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Nigegosi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_SoulHeart;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Odoriko;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Husyoku;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_ElecMaker;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_PhychoMaker;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_MistMaker;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_GrassMaker;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Gitai;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_Harikomi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_ZettaiNemuri;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_BrainPrism;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HutouNoTurugi;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_HukutuNoTate;
                    System::Array<EventFactor_EventHandlerTable_o *> * HandlerTable_ScrewObire;
                };


                extern Waza_c * Waza_TypeInfo;
                extern void * Waza_HandlerGetFunc_TypeInfo;
                // 4c5b330
                extern void * Tokusei_HandlerGetFunc_TypeInfo;

                extern MethodInfo * Method_ADD_Karagenki;

                // 4c69db8
                extern MethodInfo * Method_ADD_TetunoKobusi;
            }
        }
    }
}