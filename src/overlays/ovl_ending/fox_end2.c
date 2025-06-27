#include "global.h"
#include "assets/ast_arwing.h"
#include "assets/ast_ending_expert.h"
#include "assets/ast_allies.h"

ArwingInfo D_ending_80198590;
Vec3f D_ending_801985D0;
Vec3f D_ending_801985E0;
Vec3f D_ending_801985F0;
Vec3f D_ending_80198600[300];

bool sTagged = false;

#ifndef __vita__
#include "fox_end2_data.c"
#else
#ifndef FOX_END2_DATA
#define FOX_END2_DATA

#include "assets/ast_text.h"
#include "assets/ast_title.h"
#include "assets/ast_ending.h"

typedef struct {
    /* 0x00 */ u8* unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0C */ u16 unk_0C;
    /* 0x0E */ u16 unk_0E;
    /* 0x10 */ u8 unk_10;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
} Credit; // size = 0x14

typedef struct {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ Vec3f unk_24;
    /* 0x30 */ Vec3f unk_30;
    /* 0x3C */ Vec3f unk_3C;
    /* 0x48 */ Vec3f unk_48;
} UnkEnd54; // size = 0x54

typedef struct AssetInfo {
    /* 0x00 */ void* unk_00;
    /* 0x04 */ void* unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0C */ u32 unk_0C;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ Vec3f unk_24;
    /* 0x30 */ Vec3f unk_30;
    /* 0x3C */ Vec3f unk_3C;
    /* 0x48 */ Vec3f unk_48;
    /* 0x54 */ Vec3f unk_54;
    /* 0x60 */ Color_RGBA32 fog;
    /* 0x64 */ s16 fogNear;
    /* 0x66 */ s16 fogFar;
    /* 0x68 */ Color_RGBA32 env;
    /* 0x6C */ Color_RGBA32 prim;
    /* 0x70 */ u8 unk_70;
    /* 0x71 */ u8 unk_71;
} AssetInfo; // size = 0x72

void Ending_8018D250(u32 arg0, AssetInfo* asset);
void Ending_8018D28C(s32 arg0, AssetInfo* asset);
void Ending_8018D2C8(u32 arg0, AssetInfo* asset);
void Ending_8018D398(u32 arg0, AssetInfo* asset);
void Ending_8018D4BC(s32 arg0, AssetInfo* asset);
void Ending_8018D638(u32 arg0, AssetInfo* asset);
void Ending_8018D814(u32 arg0, AssetInfo* asset);
void Ending_8018DA0C(u32 arg0, AssetInfo* asset);
bool Ending_8018DCB4(void);
void Ending_8018E1B8(u32 arg0, AssetInfo* asset);
void Ending_8018E7B8(u32 arg0, AssetInfo* asset);
void Ending_8018EDB8(u32 arg0, AssetInfo* asset);
void Ending_8018F2A8(u32 arg0, AssetInfo* asset);
void Ending_8018F64C(u32 arg0, AssetInfo* asset);
void Ending_8018FC60(u32 arg0, AssetInfo* asset);
void Ending_80190274(u32 arg0, AssetInfo* asset);
void Ending_80190648(s32 arg0, AssetInfo* asset);
void Ending_80190778(u32 arg0, AssetInfo* asset);
void Ending_80190CF0(u32 arg0, AssetInfo* asset);
void Ending_80191234(s32 arg0, s32 arg1);
void Ending_80191294(u32 arg0, AssetInfo* asset);

// clang-format off

u32 D_ending_80192E70 = 0;

Credit D_ending_80192E74[] = {
    "PRODUCER",			        100,	200,    0,  60,    0,	0, 25, 20,
    "SHIGERU MIYAMOTO",		    100,	200,    0,  80,    1,	0, 25, 20,

    "DIRECTOR",			        430,	180,    0,  60,    0,	0, 25, 20,
    "TAKAO SHIMIZU",		    430,	180,    0,  80,    1,	0, 25, 20,

    "ART DIRECTOR",		        630,	180,    0,  60,    0,	0, 25, 20,
    "TAKAYA IMAMURA",		    630,	180,    0,  80,    1,	0, 25, 20,

    "CHIEF PROGRAMMER",		    830,	180,    0,  60,    0,	0, 25, 20,
    "KAZUAKI MORITA",		    830,	180,    0,  80,    1,	0, 25, 20,

    "SOUND COMPOSERS",		    1030,	180,    0,  60,    0,	0, 25, 20,
    "KOJI KONDO",		        1030,	180,    0,  80,    1,	0, 25, 20,
    "HAJIME WAKAI",		        1030,	180,    0,  110,   1,	0, 25, 20,

    "SOUND EFFECTS PROGRAMMER",	1250,	180,    0,  60,    0,	0, 25, 20,
    "YOJI INAGAKI",		        1250,	180,    0,  80,    1,	0, 25, 20,

    "GRAPHIC DESIGNERS",	    1490,	180,    0,  60,    0,	0, 25, 20,
    "YOSHIKI HARUHANA",		    1490,	180,    0,  80,    1,	0, 25, 20,
    "SATORU TAKIZAWA",		    1490,	180,    0,  110,   1,	0, 25, 20,
    "MASANORI SATO",		    1490,	180,    0,  140,   1,	0, 25, 20,

    "COURSE DESIGNERS",		    2000,	180,    0,  60,    0,	0, 25, 20,
    "YASUHISA YAMAMURA",	    2000,	180,    0,  80,    1,	0, 25, 20,
    "TAKUJI HOTTA",		        2000,	180,    0,  110,   1,	0, 25, 20,
    "COURSE DESIGNERS",		    2370,	180,    0,  60,    0,	0, 25, 20,
    "DAISUKE TSUJIMURA",	    2370,	180,    0,  80,    1,	0, 25, 20,
    "YASUYUKI OYAGI",		    2370,	180,    0,  110,   1,	0, 25, 20,

    "PROGRAMMERS",		        2820,	180,    0,  60,    0,	0, 25, 20,
    "YUICHI YAMAMOTO",		    2820,	180,    0,  80,    1,	0, 25, 20,
    "NOBUO OKAJIMA",		    2820,	180,    0,  110,   1,	0, 25, 20,

    "PROGRAMMERS",		        3200,	180,    0,  60,    0,	0, 25, 20,
    "SHIGEKI YOSHIDA",		    3200,	180,    0,  80,    1,	0, 25, 20,
    "TAKAMITSU KUZUHARA",	    3200,	180,    0,  110,   1,	0, 25, 20,

    "PROGRAMMERS",		        3500,	180,    0,  60,    0,	0, 25, 20,
    "NOBUHIRO SUMIYOSHI",	    3500,	180,    0,  80,    1,	0, 25, 20,
    "MAKOTO SASAKI",		    3500,	180,    0,  110,   1,	0, 25, 20,
    "MASUMI TARUKADO",		    3500,	180,    0,  140,   1,	0, 25, 20,

    "SCRIPT WRITER",		    4100,	180,    0,  60,    0,	0, 25, 20,
    "MITSUHIRO TAKANO",		    4100,	180,    0,  80,    1,	0, 25, 20,

    "CHARACTER VOICES",		    4400,	180,    0,  60,    0,	0, 25, 20,
    "MIKE WEST",		        4400,	180,    0,  80,    1,	0, 25, 20,
    "RICK MAY",			        4400,	180,    0,  110,   1,	0, 25, 20,
    "LYSSA BROWNE",		        4400,	180,    0,  140,   1,	0, 25, 20,
    "JOCK BLANEY",		        4400,	180,    0,  170,   1,	0, 25, 20,

    "CHARACTER VOICES",		    4700,	180,    0,  60,    0,	0, 25, 20,
    "DAVID WHITE",		        4700,	180,    0,  80,    1,	0, 25, 20,
    "J. GREEN",			        4700,	180,    0,  110,   1,	0, 25, 20,
    "BILL JOHNS",		        4700,	180,    0,  140,   1,	0, 25, 20,

    "TECHNICAL SUPPORTERS",	    5050,	120,    0,  60,    0,	0, 16, 13,
    "KENJI MATSUTANI",		    5050,	120,    0,  80,    1,	0, 16, 13,
    "ATSUSHI NISHIWAKI",	    5050,	120,    0,  110,   1,	0, 16, 13,
    "HIDEAKI SHIMIZU",		    5050,	120,    0,  140,   1,	0, 16, 13,

    "TECHNICAL SUPPORTERS",	    5280,	120,    0,  60,    0,	0, 16, 13,
    "YASUSHI IDA",		        5280,	120,    0,  80,    1,	0, 16, 13,
    "HIROHITO YOSHIMOTO",	    5280,	120,    0,  110,   1,	0, 16, 13,
    "YOSHINORI TANIMOTO",	    5280,	120,    0,  140,   1,	0, 16, 13,

    "TECHNICAL SUPPORTERS",	    5510,	120,    0,  60,    0,	0, 16, 13,
    "TAKAO SAWANO",		        5510,	120,    0,  80,    1,	0, 16, 13,
    "HIRONOBU KAKUI",		    5510,	120,    0,  110,   1,	0, 16, 13,
    "KENJI NISHIZAWA",		    5510,	120,    0,  140,   1,	0, 16, 13,

    "TECHNICAL SUPPORTERS",	    5740,	120,    0,  60,    0,	0, 16, 13,
    "TAKUYA KURIBAYASHI",	    5740,	120,    0,  80,    1,	0, 16, 13,
    "TSUYOSHI TAKAHASHI",	    5740,	120,    0,  110,   1,	0, 16, 13,
    "SHIN HASEGAWA",		    5740,	120,    0,  140,   1,	0, 16, 13,

    "SUPERVISORS",		        5970,	120,    0,  60,    0,	0, 16, 13,
    "TAKASHI TEZUKA",		    5970,	120,    0,  80,    1,	0, 16, 13,
    "TOSHIHIKO NAKAGO",		    5970,	120,    0,  110,   1,	0, 16, 13,
    "PROGRESS MANAGERS",	    6200,	120,    0,  60,    0,	0, 16, 13,
    "KIMIYOSHI FUKUI",		    6200,	120,    0,  80,    1,	0, 16, 13,
    "KEIZO KATO",		        6200,	120,    0,  110,   1,	0, 16, 13,

    "SPECIAL THANKS TO",	    6430,	120,    0,  60,    0,	0, 16, 13,
    "BENIMARU ITOH",		    6430,	120,    0,  80,    1,	0, 16, 13,
    "SUPER MARIO CLUB",		    6430,	120,    0,  110,    1,	0, 16, 13,
    "TRI-FILM",			        6430,	120,    0,  140,   1,	0, 16, 13,
    "EAR FORCE",		        6430,	120,    0,  170,   1,	0, 16, 13,

    "ENGLISH VERSION STAFF",	6900,	200,    0,  60,    0,	0, 25, 20,
    "JIM WORNELL",		        6900,	200,    0,  80,    1,	0, 25, 20,
    "KENJI OKUBO",		        6900,	200,    0,  110,   1,	0, 25, 20,
    "GREG RICHARDSON",		    6900,	200,    0,  140,   1,	0, 25, 20,
    "KAYOMI MCDONALD",		    6900,	200,    0,  170,   1,	0, 25, 20,
    "EXECUTIVE PRODUCER",	    7400,	200,    0,  100,   0,	0, 25, 20,
    "HIROSHI YAMAUCHI",		    7400,	200,    0,  120,   1,	0, 25, 20,

    "NINTENDO",			        7800,	200,    0,  120,   1,	0, 25, 20,
    aText_THE_END,		            8200,	380,    0,  110,   2,	1, 25, 20,
};

AssetInfo D_ending_801934B4[] = {
    { NULL, Ending_8018D250, 0, 0, 3000, 1000.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 2, 0 },
    { NULL, Ending_8018D4BC, 0, 100, 2800, 0.0f, 59.0f, 58.0f, 13.0f, 100.0f, 60.0f, 50.0f, 40.0f, 40.0f, 40.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D28C, 36, 690, 30, 1.0f, 0.7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D28C, 36, 800, 119, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D28C, 36, 920, 200, 1.0f, -1.2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_80190648, 36, 100, 1710, 1.0f, 0.0f, 0.0f, -10000.0f, 0.0f, 0.0f, 0.0f, 40.0f, 40.0f, 40.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F2A8, 29, 520, 800, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F64C, 29, 100, 820, 1.0f, -900.0f, 600.0f, -1200.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { NULL, Ending_8018F64C, 29, 920, 960, 1.0f, -900.0f, 600.0f, -1200.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { &D_arwing_3015C28, D_arwing_3016610, 29, 100, 1780, 1.0f, -1000.0f, 500.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 3, 0 },
    { aAwFalcoHeadDL, NULL, 29, 920, 150, 1.0f, -1000.0f, 506.8f, -16.0f, 5.0f, -40.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aAwFalcoHeadDL, NULL, 29, 1070, 19, 1.0f, -1000.0f, 506.8f, -16.0f, 5.0f, -40.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aAwFalcoHeadDL, NULL, 29, 1089, 1, 1.0f, -1000.0f, 506.8f, -16.0f, 5.0f, -1.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aAwFalcoHeadDL, NULL, 29, 1090, 30, 1.0f, -1000.0f, 506.8f, -16.0f, 5.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { D_arwing_30194E0, NULL, 45, 100, 1020, 1.0f, -1000.0f, 516.9f, -25.9f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {255, 255, 255, 140,}, 7, 0 },
    { NULL, Ending_8018E1B8, 67, 100, 1780, 1.0f, -1000.0f, 500.0f, -64.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.3f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { D_arwing_3015C28, D_arwing_3016610, 29, 100, 1780, 1.0f, -1000.0f, -500.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 5, 0 },
    { NULL, Ending_80190778, 29, 1120, 200, 1.0f, -1000.0f, -493.2f, -16.0f, 0.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { D_arwing_30194E0, NULL, 45, 1120, 200, 1.0f, -1000.0f, -483.1f, -25.9f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {255, 255, 255, 140,}, 7, 0 },
    { NULL, Ending_8018E1B8, 67, 100, 1780, 1.0f, -1000.0f, -500.0f, -57.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.3f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { NULL, Ending_8018FC60, 29, 100, 420, 1.0f, 1000.0f, 560.0f, -440.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { NULL, Ending_8018FC60, 29, 520, 130, 1.0f, 1000.0f, 560.0f, -440.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 4.0f, 0.0f, 0.0f, 1.8f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { NULL, Ending_8018FC60, 29, 650, 1230, 1.0f, 800.0f, -300.0f, 350.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { NULL, Ending_80191294, 29, 100, 1780, 1.0f, 1000.0f, 500.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { NULL, Ending_8018E1B8, 67, 100, 1780, 1.0f, 1000.0f, 500.0f, -57.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.3f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { &D_arwing_3015C28, D_arwing_3016610, 29, 100, 1780, 1.0f, 1000.0f, -500.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 11, 0 },
    { aAwPeppyHeadDL, NULL, 29, 850, 20, 1.0f, 1000.0f, -493.2f, -16.0f, 5.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 870, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 7.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 871, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 10.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 872, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 14.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 873, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 16.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 874, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 14.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 875, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 11.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 876, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 7.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 877, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 7.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 878, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 10.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 879, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 14.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 880, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 16.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 881, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 14.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 882, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 10.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 883, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 7.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 884, 36, 1.0f, 1000.0f, -493.2f, -16.0f, 5.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { D_arwing_30194E0, NULL, 45, 850, 70, 1.0f, 999.0f, -483.1f, -25.9f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {255, 255, 255, 140,}, 11, 0 },
    { NULL, Ending_8018E1B8, 67, 100, 1780, 1.0f, 1000.0f, -500.0f, -34.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.3f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { NULL, Ending_8018F2A8, 29, 100, 420, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F2A8, 29, 1320, 470, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_80190274, 36, 1810, 1090, 1.0f, -200.0f, 0.0f, -10000.0f, 0.0f, 0.0f, 0.0f, 150.0f, 150.0f, 150.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F2A8, 29, 1920, 980, 1.0f, 0.0f, 1000.0f, -700.0f, 0.0f, 180.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, -10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 100, 11, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 0, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 1770, 30, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 2780, 30, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 510, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 710, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 910, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 1110, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 1310, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D250, 4, 3000, 2000, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 3, 0 },
    { NULL, Ending_8018D4BC, 0, 3100, 1800, 0.0f, 0.0f, 13.0f, -32.0f, 200.0f, 70.0f, 10.0f, 10.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { D_END_7016540, NULL, 17, 3100, 1800, 1.0f, 0.0f, -2700.0f, -6900.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F2A8, 23, 3800, 950, 1.0f, 8000.0f, -5500.0f, -10000.0f, -10.0f, -90.0f, 0.0f, 3.0f, 3.0f, 3.0f, -22.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018E7B8, 67, 3800, 950, 1.0f, 12330.0f, -6500.0f, -9200.0f, 0.0f, 0.0f, -10.0f, 35.0f, 10.0f, 20.0f, -22.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {255, 255, 0, 0,}, {255, 255, 255, 164,}, 0, 0 },
    { NULL, Ending_8018E7B8, 67, 3800, 950, 1.0f, 15600.0f, -6710.0f, -9960.0f, 0.0f, 0.0f, -10.0f, 35.0f, 10.0f, 20.0f, -22.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {255, 255, 0, 0,}, {255, 255, 255, 164,}, 0, 0 },
    { NULL, Ending_8018D4BC, 0, 3100, 1800, 0.0f, 0.0f, 32.0f, -32.0f, 200.0f, 70.0f, 10.0f, 10.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018EDB8, 20, 3100, 1800, 1.0f, 0.0f, -470.0f, -3500.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { &aFoxRunningAnim, aFoxSkel, 12, 3100, 1800, 5.0f, -300.0f, -300.0f, -1300.0f, 5.0f, -90.0f, -90.0f, 0.6f, 0.1f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 200,}, 10, 0 },
    { &aFoxRunningAnim, aFoxSkel, 23, 3100, 1800, 5.0f, -300.0f, -300.0f, -1300.0f, 5.0f, -90.0f, 0.0f, 0.6f, 0.6f, 0.6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { &aFalcoRunningAnim, aFalcoSkel, 12, 3100, 1800, 5.0f, -100.0f, -300.0f, -1300.0f, 10.0f, -90.0f, -90.0f, 0.6f, 0.1f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 200,}, 0, 0 },
    { &aFalcoRunningAnim, aFalcoSkel, 23, 3100, 1800, 5.0f, -100.0f, -300.0f, -1300.0f, 10.0f, -90.0f, 0.0f, 0.6f, 0.6f, 0.6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { &aPeppyRunningAnim, aPeppySkel, 12, 3100, 1800, 6.0f, 100.0f, -300.0f, -1300.0f, -10.0f, -90.0f, -90.0f, 0.6f, 0.1f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 200,}, 0, 0 },
    { &aPeppyRunningAnim, aPeppySkel, 23, 3100, 1800, 6.0f, 100.0f, -300.0f, -1300.0f, -10.0f, -90.0f, 0.0f, 0.6f, 0.6f, 0.6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { &aSlippyRunningAnim, aSlippySkel, 12, 3100, 1800, 7.0f, 300.0f, -300.0f, -1300.0f, -15.0f, -90.0f, -90.0f, 0.6f, 0.1f, 6.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 200,}, 0, 0 },
    { &aSlippyRunningAnim, aSlippySkel, 23, 3100, 1800, 7.0f, 300.0f, -300.0f, -1300.0f, -15.0f, -90.0f, 0.0f, 0.6f, 0.6f, 0.6f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D250, 5, 5000, 2000, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 2, 0 },
    { NULL, Ending_8018D4BC, 0, 5100, 1800, 0.0f, 0.0f, 32.0f, -32.0f, 200.0f, 70.0f, 10.0f, 10.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { D_END_7016540, NULL, 17, 5100, 310, 1.0f, 0.0f, -2800.0f, -6900.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -4.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { D_END_7016540, NULL, 17, 5410, 1490, 1.0f, 0.0f, -4040.0f, -6900.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_80190CF0, 62, 6520, 380, 1.0f, 0.0f, 0.0f, -7000.0f, 0.0f, 0.0f, 0.0f, 12.0f, 12.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 200, 0, {0, 0, 0, 0,}, {255, 255, 255, 0,}, 0, 0 },
    { D_arwing_3015AF4, D_arwing_3016610, 29, 5100, 1800, 1.0f, 100.0f, 100.0f, -230.0f, 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 3, 0 },
    { D_END_7010970, NULL, 38, 5100, 1800, 1.0f, 100.0f, 95.0f, -200.0f, 0.0f, 0.0f, 0.0f, 0.4f, 0.3f, 0.4f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {255, 0, 0, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { D_arwing_3015AF4, D_arwing_3016610, 29, 5100, 1800, 1.0f, 100.0f, -100.0f, -230.0f, 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 5, 0 },
    { D_END_7010970, NULL, 38, 5100, 1800, 1.0f, 100.0f, -105.0f, -200.0f, 0.0f, 0.0f, 0.0f, 0.4f, 0.3f, 0.4f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {255, 0, 0, 0,}, {255, 255, 255, 255,}, 5, 0 },
    { D_arwing_3015AF4, D_arwing_3016610, 29, 5100, 1800, 1.0f, -100.0f, 100.0f, -230.0f, 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { D_END_7010970, NULL, 38, 5100, 1800, 1.0f, -100.0f, 95.0f, -200.0f, 0.0f, 0.0f, 0.0f, 0.4f, 0.3f, 0.4f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {255, 0, 0, 0,}, {255, 255, 255, 255,}, 7, 0 },
    { D_arwing_3015AF4, D_arwing_3016610, 29, 5100, 1800, 1.0f, -100.0f, -100.0f, -230.0f, 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 11, 0 },
    { D_END_7010970, NULL, 38, 5100, 1800, 1.0f, -100.0f, -105.0f, -200.0f, 0.0f, 0.0f, 0.0f, 0.4f, 0.3f, 0.4f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {255, 0, 0, 0,}, {255, 255, 255, 255,}, 11, 0 },
    { NULL, Ending_8018F2A8, 29, 5100, 1800, 1.0f, 0.0f, 0.0f, -220.0f, 0.0f, 180.0f, 0.0f, 0.1f, 0.1f, 0.1f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018DA0C, 76, 6520, 380, 1.0f, 224.0f, 164.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 20, 0, {0, 0, 0, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { NULL, Ending_8018D638, 36, 6900, 300, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 0, 20, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D398, 36, 3000, 370, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 0, 250, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D814, 76, 6122, 200, 1.0f, 128.0f, 100.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 20, 20, {0, 0, 0, 0,}, {255, 255, 255, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 4880, 240, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 6800, 100, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 100, 0, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 7100, 100, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 100, 0, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_80191234, 0, 7200, 100, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 0, 0, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 }
};

UnkEnd54 D_ending_80195F4C[] = {
    100,      420,     1,        0.0f,     0.0f,   0.0f,  0.0f,  0.0f, 0.0f,    0.0f,    0.0f,     0.0f,     0.0f,   0.0f,      12000.0f, 0.0f,   0.0f,  -40.0f, -0.2f, 0.0f,    0.0f, 520,  200,      0,        1000.0f,  506.8f, -16.0f, 0.0f, 0.0f, 0.0f, 0.0f,   0.0f,
    0.0f,     1022.0f, 503.0f,   300.0f,   0.0f,   0.0f,  -3.0f, 0.0f, 0.0f,    -0.015f, 720,      200,      0,      1000.0f,   -490.0f,  -10.0f, 0.0f,  0.0f,   0.0f,  0.0f,    0.0f, 0.0f, 1015.0f,  -497.0f,  -297.0f,  0.0f,   0.0f,   3.0f, 0.0f, 0.0f, 0.015f, 920,
    200,      0,       -1000.0f, 510.0f,   -10.0f, 0.0f,  0.0f,  0.0f, 0.0f,    0.0f,    0.0f,     -1320.0f, 503.0f, 320.0f,    3.0f,     0.0f,   -3.0f, 0.015f, 0.0f,  -0.015f, 1120, 200,  0,        -1000.0f, -481.0f,  -16.0f, 0.0f,   0.0f, 0.0f, 0.0f, 0.0f,   0.0f,
    -1000.0f, -497.5f, 320.0f,   0.0f,     0.0f,   -3.0f, 0.0f,  0.0f, -0.015f, 1320,    470,      0,        0.0f,   0.0f,      0.0f,     0.0f,   0.0f,  0.0f,   0.0f,  0.0f,    0.0f, 0.0f, -1500.0f, -221.0f,  0.0f,     0.0f,   -22.0f, 0.0f, 0.0f, 0.0f, 1790,   20,
    0,        0.0f,    0.0f,     -5000.0f, 0.0f,   0.0f,  0.0f,  0.0f, 0.0f,    0.0f,    -5050.0f, 0.0f,     0.0f,   0.0f,      0.0f,     0.0f,   0.0f,  0.0f,   0.0f,  1810,    100,  0,    0.0f,     0.0f,     -5000.0f, 0.0f,   0.0f,   0.0f, 0.0f, 0.0f, 0.0f,   -5050.0f,
    0.0f,     0.0f,    100.0f,   0.0f,     0.0f,   1.0f,  0.0f,  0.0f, 0,       10000,   0,        0.0f,     0.0f,   -12800.0f, 0.0f,     0.0f,   0.0f,  0.0f,   0.0f,  0.0f,    0.0f, 0.0f, 0.0f,     0.0f,     0.0f,     0.0f,   0.0f,   0.0f, 0.0f,
};

// clang-format on

#endif
#endif

void Ending_8018CE20(u32 arg0) {
    u8 alpha;
    s32 i;
    s32 xPos;

    for (i = 0; i < ARRAY_COUNT(D_ending_80192E74); i++) {
        if (D_ending_80192E74[i].unk_00 != NULL) {
            if ((D_ending_80192E74[i].unk_04 <= arg0) &&
                ((D_ending_80192E74[i].unk_04 + D_ending_80192E74[i].unk_08) > arg0)) {
                alpha = 255;

                if ((D_ending_80192E74[i].unk_04 + D_ending_80192E74[i].unk_12) > arg0) {
                    alpha = (arg0 - D_ending_80192E74[i].unk_04) * 255 / D_ending_80192E74[i].unk_12;
                }

                if ((D_ending_80192E74[i].unk_04 + D_ending_80192E74[i].unk_08 - D_ending_80192E74[i].unk_13) < arg0) {
                    alpha = (D_ending_80192E74[i].unk_04 + D_ending_80192E74[i].unk_08 - arg0) * 255 /
                            D_ending_80192E74[i].unk_13;
                }

                if ((D_ending_80192E74[i].unk_11 == 0) || (gVenomHardClear == 1)) {
                    if (D_ending_80192E74[i].unk_10 == 1) {
                        xPos = (SCREEN_WIDTH - Graphics_GetLargeTextWidth(D_ending_80192E74[i].unk_00)) / 2;
                        RCP_SetupDL(&gMasterDisp, SETUPDL_83);
                        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
                        Graphics_DisplayLargeText(xPos, D_ending_80192E74[i].unk_0E, 1.0f, 1.0f,
                                                  D_ending_80192E74[i].unk_00);

                    } else if (D_ending_80192E74[i].unk_10 == 2) {
                        RCP_SetupDL(&gMasterDisp, SETUPDL_83);
                        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
                        Lib_TextureRect_IA8(&gMasterDisp, D_ending_80192E74[i].unk_00, 192, 30, 64.0f, 105.0f, 1.0f,
                                            1.0f);
                    } else {
                        xPos = (320 - Graphics_GetSmallTextWidth(D_ending_80192E74[i].unk_00)) / 2;
                        RCP_SetupDL(&gMasterDisp, SETUPDL_83_POINT);
                        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 155, 155, alpha);
                        Graphics_DisplaySmallText(xPos, D_ending_80192E74[i].unk_0E, 1.0f, 1.0f,
                                                  D_ending_80192E74[i].unk_00);
                    }
                }
            }
        }
    }
}

void Ending_8018D250(u32 arg0, AssetInfo* asset) {
    gSceneSetup = asset->unk_08;
    gVIsPerFrame = asset->unk_70;
    gStarCount = asset->unk_14;
}

void Ending_8018D28C(s32 arg0, AssetInfo* asset) {
    gStarfieldScrollX += asset->unk_18.x;
    gStarfieldScrollY += asset->unk_18.y;
}

void Ending_8018D2C8(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    if ((asset->unk_0C + asset->unk_10 - asset->fogFar) < arg0) {
        alpha = (asset->unk_0C + asset->unk_10 - arg0 - 1) * 255 / asset->fogFar;
    }

    gFillScreenRed = asset->prim.r;
    gFillScreenGreen = asset->prim.g;
    gFillScreenBlue = asset->prim.b;

    gFillScreenAlpha = gFillScreenAlphaTarget = alpha;
    gFillScreenAlphaStep = 0;
}

void Ending_8018D398(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    if ((asset->unk_0C + asset->unk_10 - asset->fogFar) < arg0) {
        alpha = (asset->unk_0C + asset->unk_10 - arg0) * 255 / asset->fogFar;
    }

    gFillScreenRed = gFillScreenGreen = gFillScreenBlue = gFillScreenAlpha = gFillScreenAlphaTarget =
        gFillScreenAlphaStep = 0;

    Graphics_FillRectangle(&gMasterDisp, SCREEN_MARGIN, SCREEN_MARGIN, SCREEN_WIDTH - SCREEN_MARGIN,
                           SCREEN_HEIGHT - SCREEN_MARGIN, asset->prim.r, asset->prim.g, asset->prim.b, alpha);
}

void Ending_8018D4BC(s32 arg0, AssetInfo* asset) {
    Vec3f src;
    Vec3f dest;

    Matrix_RotateY(gCalcMatrix, M_DTOR * D_ending_801985F0.y, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, M_DTOR * D_ending_801985F0.x, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, M_DTOR * D_ending_801985F0.z, MTXF_APPLY);

    src.x = asset->unk_18.x;
    src.y = asset->unk_18.y;
    src.z = asset->unk_18.z;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    Lights_SetOneLight(&gMasterDisp, dest.x, dest.y, dest.z, asset->unk_24.x, asset->unk_24.y, asset->unk_24.z,
                       asset->unk_30.x, asset->unk_30.y, asset->unk_30.z);
}

void Ending_8018D638(u32 arg0, AssetInfo* asset) {
    u8 alpha = 0;
    s32 i;

    if ((asset->unk_0C + asset->fogFar) > arg0) {
        alpha = (asset->unk_0C + asset->fogFar - arg0) * 255 / asset->fogFar;
    }

    gFillScreenRed = asset->prim.r;
    gFillScreenGreen = asset->prim.g;
    gFillScreenBlue = asset->prim.b;

    gFillScreenAlpha = gFillScreenAlphaTarget = alpha;
    gFillScreenAlphaStep = 0;

    RCP_SetupDL(&gMasterDisp, SETUPDL_83);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    if (gExpertMode != 0) {
        if (gVenomHardClear == 0) {
            Lib_TextureRect_RGBA16(&gMasterDisp, gEndingNormalReward, 316, 240, 0.0f, 0.0f, 1.0f, 1.0f);
        } else {
            Lib_TextureRect_RGBA16(&gMasterDisp, gEndingExpertReward, 316, 240, 0.0f, 0.0f, 1.0f, 1.0f);
        }
    } else {
        D_ending_80192E70 = 7200;
    }
}

void Ending_8018D814(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    if ((asset->unk_0C + asset->unk_10 - asset->fogFar) < arg0) {
        alpha = (asset->unk_0C + asset->unk_10 - arg0) * 255 / asset->fogFar;
    }

    RCP_SetupDL(&gMasterDisp, SETUPDL_76_POINT);

    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, alpha);

    Lib_TextureRect_IA8(&gMasterDisp, sLargeText_1997_1, 16, 15, asset->unk_18.x, asset->unk_18.y, 1.0f, 1.0f);
    Lib_TextureRect_IA8(&gMasterDisp, sLargeText_1997_9, 16, 15, asset->unk_18.x + 16.0f * 1, asset->unk_18.y, 1.0f,
                        1.0f);
    Lib_TextureRect_IA8(&gMasterDisp, sLargeText_1997_9, 16, 15, asset->unk_18.x + 16.0f * 2, asset->unk_18.y, 1.0f,
                        1.0f);
    Lib_TextureRect_IA8(&gMasterDisp, sLargeText_1997_7, 16, 15, asset->unk_18.x + 16.0f * 3, asset->unk_18.y, 1.0f,
                        1.0f);
}

void Ending_8018DA0C(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    RCP_SetupDL(&gMasterDisp, SETUPDL_76_POINT);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, alpha);

    Graphics_DisplaySmallText((s16) asset->unk_18.x, (s16) asset->unk_18.y, asset->unk_30.x, asset->unk_30.y,
                              "TOTAL HITS");
    Graphics_DisplayLargeNumber((s16) (asset->unk_18.x + 5), (s16) (asset->unk_18.y + 13), gTotalHits);

    if ((Ending_8018DCB4() == true) && (alpha == 255)) {
        alpha = (arg0 - (asset->unk_0C + asset->fogNear)) % 10;

        switch (alpha) {
            case 0:
            case 1:
            case 2:
            case 3:
                alpha = 83 * alpha;
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                alpha = 42 * (10 - alpha);
                break;
        }
        gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, alpha);
        Graphics_DisplaySmallText((s16) (asset->unk_18.x + 7), (s16) (asset->unk_18.y + 31), asset->unk_30.x,
                                  asset->unk_30.y, "RANK IN!!");
    }
}

bool Ending_8018DCB4(void) {
    s32 i;
    s32 j;
    s32 k;
    s32 m;
    s32 temp;
    s32 teamAlive = 0;
    s32 temp3 = 0;
    s32 temp4[10];
    s32 stats[10][7];
    s32 unk40[10];

    for (i = 0; i < gMissionNumber + 1; i++) {
        teamAlive += ((gMissionTeamStatus[i] & TEAMSTATUS_PEPPY) >> 16) & 1;
        teamAlive += ((gMissionTeamStatus[i] & TEAMSTATUS_SLIPPY) >> 8) & 1;
        teamAlive += (gMissionTeamStatus[i] & TEAMSTATUS_FALCO) & 1;
    }

    for (i = 0; i < 10; i += 1) {
        temp4[i] = 0;
        unk40[i] = gSaveFile.save.data.rankingLives[i];

        for (j = 0; j < 7; j += 1) {
            temp4[i] += gSaveFile.save.data.stats[i][j].hitCount + (gSaveFile.save.data.stats[i][j].unk_C * 256);
            stats[i][0] += gSaveFile.save.data.stats[i][j].peppyAlive & 1;
            stats[i][1] += gSaveFile.save.data.stats[i][j].slippyAlive & 1;
            stats[i][2] += gSaveFile.save.data.stats[i][j].falcoAlive & 1;
        }
    }

    temp = -1;

    for (i = 0; i < 10; i++) {
        if (temp4[i] <= gTotalHits) {
            if (temp4[i] == gTotalHits) {
                for (j = i; j < 10; j++) {
                    if (temp4[j] != gTotalHits) {
                        temp = j;
                        break;
                    }

                    if (unk40[j] <= gLifeCount[gPlayerNum]) {
                        if (unk40[j] == gLifeCount[gPlayerNum]) {
                            for (k = j; k < 10; k++) {
                                if ((unk40[k] != gLifeCount[gPlayerNum]) || (temp4[k] != gTotalHits)) {
                                    temp = k;
                                    break;
                                }

                                temp3 = 0;

                                for (m = 0; m < 3; m++) {
                                    temp3 += stats[k][m];
                                }

                                if (teamAlive > temp3) {
                                    temp = k;
                                    break;
                                }
                            }
                        } else {
                            temp = j;
                        }
                        break;
                    }
                }
            } else {
                temp = i;
            }
            break;
        }
    }

    if (temp == -1) {
        return false;
    } else {
        return true;
    }
}

void Ending_8018E1B8(u32 arg0, AssetInfo* asset) {
    f32 temp;

    if ((asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z) < D_ending_801985D0.z) {
        RCP_SetupDL(&gMasterDisp, SETUPDL_67);
    } else {
        RCP_SetupDL(&gMasterDisp, SETUPDL_63);
    }

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x + (arg0 % 3) * 0.01f, asset->unk_30.y + (arg0 % 3) * 0.01f,
                 asset->unk_30.z + (arg0 % 3) * 0.01f, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;

        default:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_END_7010970);
}

void Ending_8018E7B8(u32 arg0, AssetInfo* asset) {
    f32 temp;

    if ((asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z) < D_ending_801985D0.z) {
        RCP_SetupDL(&gMasterDisp, SETUPDL_67);
    } else {
        RCP_SetupDL(&gMasterDisp, SETUPDL_63);
    }

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;

        default:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;
    }

    Matrix_Scale(gGfxMatrix, asset->unk_30.x + (arg0 % 3) * 0.5f, asset->unk_30.y + (arg0 % 3) * 0.5f,
                 asset->unk_30.z + (arg0 % 3) * 0.5f, MTXF_APPLY);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_END_7010970);
}

void Ending_8018EDB8(u32 arg0, AssetInfo* asset) {
    f32 temp;

    // @port: Tag the transform.
    FrameInterpolation_RecordOpenChild("Running Scene Floor", 0);

    gStarCount = 0;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                   MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                   MTXF_APPLY);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                   MTXF_APPLY);

    Matrix_SetGfxMtx(&gMasterDisp);

    gDPLoadTextureBlock(gMasterDisp++, D_END_700EA38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_WRAP | G_TX_NOMIRROR,
                        G_TX_WRAP | G_TX_NOMIRROR, 5, 5, G_TX_NOLOD, G_TX_NOLOD);
    gDPSetupTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, arg0 * 14, 0, G_TX_NOMIRROR | G_TX_WRAP,
                 G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD);
    gSPDisplayList(gMasterDisp++, D_END_700E9E0);
}

// Draw Great Fox
void Ending_8018F2A8(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                   MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                   MTXF_APPLY);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                   MTXF_APPLY);

    Matrix_SetGfxMtx(&gMasterDisp);

    gCurrentLevel = LEVEL_UNK_M1;

    Cutscene_DrawGreatFox();
}

void Ending_8018F64C(u32 arg0, AssetInfo* asset) {
    f32 temp;

    // @port: Avoid drawing Katt after 1800 ending frames to avoid interpolation issues
    if ((gLeveLClearStatus[LEVEL_ZONESS] == 0) || (D_ending_80192E70 >= 1800)) {
        return;
    }

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;

        default:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, aKattShipDL);

    RCP_SetupDL(&gMasterDisp, SETUPDL_67);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, 0.8f + (arg0 % 3) * 0.01f, 0.3f + (arg0 % 3) * 0.01f, 0.8f + (arg0 % 3) * 0.01f,
                 MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_END_7010970);
}

void Ending_8018FC60(u32 arg0, AssetInfo* asset) {
    f32 temp;

    // @port: Avoid drawing Bill after 1800 ending frames to avoid interpolation issues
    if ((gLeveLClearStatus[LEVEL_KATINA] == 0) || (D_ending_80192E70 >= 1800)) {
        return;
    }

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;

        default:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, aBillShipDL);

    RCP_SetupDL(&gMasterDisp, SETUPDL_67);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -50.0f, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, 0.5f + (arg0 % 3) * 0.01f, 0.3f + (arg0 % 3) * 0.01f, 0.5f + (arg0 % 3) * 0.01f,
                 MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_END_7010970);
}

void Ending_80190274(u32 arg0, AssetInfo* asset) {
    f32 temp;

    // @port: Tag the transform.
    FrameInterpolation_RecordOpenChild("Corneria_Planet", 0);

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, D_ending_801985D0.x + asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     D_ending_801985D0.y + asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     D_ending_801985D0.z + asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                   MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                   MTXF_APPLY);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                   MTXF_APPLY);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_END_7004240);
}

void Ending_80190648(s32 arg0, AssetInfo* asset) {
    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    Matrix_RotateY(gGfxMatrix, M_DTOR * D_ending_801985F0.y, MTXF_NEW);
    Matrix_RotateX(gGfxMatrix, M_DTOR * D_ending_801985F0.x, MTXF_APPLY);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * D_ending_801985F0.z, MTXF_APPLY);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x, asset->unk_18.y, asset->unk_18.z, MTXF_APPLY);
    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    Matrix_SetGfxMtx(&gMasterDisp);

    // @port: Hide Venom under 1700 frames
    if (D_ending_80192E70 < 1700) {
        gSPDisplayList(gMasterDisp++, D_END_7002120);
    }
}

void Ending_80190778(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y - 6.0f + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.2f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;

        default:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;
    }

    Matrix_Translate(gGfxMatrix, 0.0f, 480.0f, 0.0f, MTXF_APPLY);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, aAwSlippyHeadDL);
}

void Ending_80190CF0(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;
    f32 temp;

    if (gVenomHardClear == 1) {
        return;
    }

    if (arg0 == asset->unk_0C) {
        AUDIO_PLAY_SFX(NA_SE_VO_ANDROSS_LAUGH, gDefaultSfxSource, 4);
    }

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, alpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.2f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;

        default:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_END_7000000);
}

void Ending_80191234(s32 arg0, s32 arg1) {
    gLastGameState = GSTATE_ENDING;
    gGameState = GSTATE_MENU;
    gNextGameStateTimer = 2;
    gOptionMenuStatus = OPTION_WAIT;
    gDrawMode = DRAW_NONE;
    gBgColor = 0;
    gStarCount = 0;
    gControllerLock = 10;
}

void Ending_80191294(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                   MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                   MTXF_APPLY);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                   MTXF_APPLY);

    Matrix_SetGfxMtx(&gMasterDisp);

    D_ending_80198590.unk_28 = 0.0f;
    D_ending_80198590.bottomLeftFlapYrot = D_ending_80198590.unk_28;
    D_ending_80198590.laserGunsYpos = 0.0f;
    D_ending_80198590.upperLeftFlapYrot = D_ending_80198590.bottomLeftFlapYrot;
    D_ending_80198590.bottomRightFlapYrot = D_ending_80198590.upperLeftFlapYrot;
    D_ending_80198590.upperRightFlapYrot = D_ending_80198590.bottomRightFlapYrot;
    D_ending_80198590.wingsZrot = D_ending_80198590.upperRightFlapYrot;
    D_ending_80198590.wingsYrot = D_ending_80198590.wingsZrot;
    D_ending_80198590.wingsXrot = D_ending_80198590.wingsYrot;
    D_ending_80198590.laserGunsXpos = D_ending_80198590.wingsXrot;

    if ((arg0 > 520) && (arg0 < 720)) {
        D_ending_80198590.drawFace = true;
    } else {
        D_ending_80198590.drawFace = false;
    }

    D_ending_80198590.cockpitGlassXrot = 0.0f;
    D_ending_80198590.teamFaceXrot = +D_ending_801985F0.x;
    D_ending_80198590.teamFaceYrot = -D_ending_801985F0.y;

    Display_ArwingWings(&D_ending_80198590);
}

// Stubbed
void Ending_80191700(u32 arg0, AssetInfo* asset) {
}

// Draws obj displaylist
void Ending_80191710(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;

        default:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                           MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                           MTXF_APPLY);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR *
                               (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                           MTXF_APPLY);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, asset->unk_00);
}

// Function pointer execution
void Ending_80191C58(u32 arg0, AssetInfo* asset) {
    ((void (*)(u32, AssetInfo*)) asset->unk_04)(arg0, asset);
}

// Draws skeleton
void Ending_80191C7C(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fog.r, asset->fog.g, asset->fog.b, 0);
    gDPSetEnvColor(gMasterDisp++, asset->env.r, asset->env.g, asset->env.b, asset->env.a);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->prim.r, asset->prim.g, asset->prim.b, asset->prim.a);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, MTXF_APPLY);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, MTXF_APPLY);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y),
                   MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x),
                   MTXF_APPLY);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z),
                   MTXF_APPLY);

    Matrix_SetGfxMtx(&gMasterDisp);

    Animation_GetFrameData(asset->unk_00,
                           (u32) ((arg0 + asset->unk_70) * asset->unk_14) % Animation_GetFrameCount(asset->unk_00),
                           D_ending_80198600);
    Animation_DrawSkeleton(0, asset->unk_04, D_ending_80198600, NULL, NULL, NULL, &gIdentityMatrix);
}

void Ending_80192164(u32 arg0) {
    s32 i;

    for (i = 0; i < 94; i++) {
        if ((D_ending_801934B4[i].unk_0C <= arg0) &&
            ((D_ending_801934B4[i].unk_0C + D_ending_801934B4[i].unk_10) > arg0)) {
            Matrix_Push(&gGfxMatrix);
            if ((D_ending_801934B4[i].unk_00 == NULL) && (D_ending_801934B4[i].unk_04 == NULL)) {
                Ending_80191700(arg0, &D_ending_801934B4[i]);
            } else if ((D_ending_801934B4[i].unk_00 != NULL) && (D_ending_801934B4[i].unk_04 == NULL)) {
                // @port: Tag the transform.
                FrameInterpolation_RecordOpenChild(&D_ending_801934B4[i], arg0);
                sTagged = true;
                Ending_80191710(arg0, &D_ending_801934B4[i]);
            } else if ((D_ending_801934B4[i].unk_00 == NULL) && (D_ending_801934B4[i].unk_04 != NULL)) {
                Ending_80191C58(arg0, &D_ending_801934B4[i]);
            } else if ((D_ending_801934B4[i].unk_00 != NULL) && (D_ending_801934B4[i].unk_04 != NULL)) {
                Ending_80191C7C(arg0, &D_ending_801934B4[i]);
            }
            Matrix_Pop(&gGfxMatrix);
            if (sTagged) {
                // @port Pop the transform id.
                FrameInterpolation_RecordCloseChild();
                sTagged = false;
            }
        }
    }
}

void Ending_80192290(u32 arg0, UnkEnd54* unkEnd54) {
    s32 i;

    for (i = 0; i < (arg0 - unkEnd54->unk_00); i++) {
        D_ending_801985E0.x += unkEnd54->unk_18.x - (unkEnd54->unk_24.x * i);
        D_ending_801985E0.y += unkEnd54->unk_18.y - (unkEnd54->unk_24.y * i);
        D_ending_801985E0.z += unkEnd54->unk_18.z - (unkEnd54->unk_24.z * i);
        D_ending_801985D0.x += unkEnd54->unk_3C.x - (unkEnd54->unk_48.x * i);
        D_ending_801985D0.y += unkEnd54->unk_3C.y - (unkEnd54->unk_48.y * i);
        D_ending_801985D0.z += unkEnd54->unk_3C.z - (unkEnd54->unk_48.z * i);
    }
}

void Ending_8019237C(u32 arg0, UnkEnd54* unkEnd54) {
    s32 i;
    s32 j;

    for (i = 0; i < arg0 - unkEnd54->unk_00; i++) {
        if (i < unkEnd54->unk_04 * 1 / 4) {
            j = i;
        } else if (i < (unkEnd54->unk_04 * 2) / 4) {
            j = (unkEnd54->unk_04 * 2) / 4 - i;
        } else if (i < (unkEnd54->unk_04 * 3) / 4) {
            j = -(i - (unkEnd54->unk_04 * 2) / 4);
        } else if (i < (unkEnd54->unk_04 * 4) / 4) {
            j = -((unkEnd54->unk_04 * 2) / 4 - (i - (unkEnd54->unk_04 * 2) / 4));
        }

        D_ending_801985E0.x += unkEnd54->unk_18.x - (unkEnd54->unk_24.x * j);
        D_ending_801985E0.y += unkEnd54->unk_18.y - (unkEnd54->unk_24.y * j);
        D_ending_801985E0.z += unkEnd54->unk_18.z - (unkEnd54->unk_24.z * j);
        D_ending_801985D0.x += unkEnd54->unk_3C.x - (unkEnd54->unk_48.x * j);
        D_ending_801985D0.y += unkEnd54->unk_3C.y - (unkEnd54->unk_48.y * j);
        D_ending_801985D0.z += unkEnd54->unk_3C.z - (unkEnd54->unk_48.z * j);
    }
}

void Ending_801924EC(u32 arg0) {
    s32 i;
    UnkEnd54* unkEnd54 = D_ending_80195F4C;

    for (i = 0; i < ARRAY_COUNT(D_ending_80195F4C); i++, unkEnd54++) {
        if ((unkEnd54->unk_00 <= arg0) && ((unkEnd54->unk_00 + unkEnd54->unk_04) > arg0)) {
            D_ending_801985E0.x = D_ending_801985E0.y = D_ending_801985E0.z = D_ending_801985D0.x =
                D_ending_801985D0.y = D_ending_801985D0.z = 0.0f;

            switch (unkEnd54->unk_08) {
                case 1:
                    Ending_8019237C(arg0, unkEnd54);
                    break;

                default:
                    Ending_80192290(arg0, unkEnd54);
                    break;
            }

            D_ending_801985E0.x += unkEnd54->unk_0C.x;
            D_ending_801985E0.y += unkEnd54->unk_0C.y;
            D_ending_801985E0.z += unkEnd54->unk_0C.z;
            D_ending_801985D0.x += unkEnd54->unk_30.x;
            D_ending_801985D0.y += unkEnd54->unk_30.y;
            D_ending_801985D0.z += unkEnd54->unk_30.z;

            Matrix_LookAt(gGfxMatrix, D_ending_801985D0.x, D_ending_801985D0.y, D_ending_801985D0.z,
                          D_ending_801985E0.x, D_ending_801985E0.y, D_ending_801985E0.z, 0.0f, 1.0f, 0.0f, MTXF_APPLY);

            Camera_SetStarfieldPos(D_ending_801985D0.x, D_ending_801985D0.y, D_ending_801985D0.z, D_ending_801985E0.x,
                                   D_ending_801985E0.y, D_ending_801985E0.z);

            Matrix_GetYRPAngles(gGfxMatrix, &D_ending_801985F0);
            break;
        }
    }
}

void Ending_801926D4(void) {
    gControllerLock = 10000;

    Matrix_Push(&gGfxMatrix);

    Ending_801924EC(D_ending_80192E70);
    Ending_80192164(D_ending_80192E70);

    Matrix_Pop(&gGfxMatrix);

    D_ending_80192E70++;

    if ((0 <= D_ending_80192E70) && (D_ending_80192E70 < 100)) {
        D_ending_80192E70 = 100;
        if (!gClearPlayerInfo) {
            D_ending_80198590 = gPlayer[0].arwing;
        } else {
            D_ending_80198590.rightWingState = D_ending_80198590.leftWingState = WINGSTATE_INTACT;
        }
        AUDIO_PLAY_BGM(NA_BGM_STAFF_ROLL);
    }

    if ((2790 <= D_ending_80192E70) && (D_ending_80192E70 < 3000)) {
        D_ending_80192E70 = 3099;
    }

    if ((4890 < D_ending_80192E70) && (D_ending_80192E70 < 4999)) {
        D_ending_80192E70 = 4999;
    }

    if ((5000 <= D_ending_80192E70) && (D_ending_80192E70 < 5096)) {
        D_ending_80192E70 = 5096;
    }
}
