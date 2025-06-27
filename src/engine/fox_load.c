#include "global.h"
#include "sf64dma.h"

u8 sFillTimer = 3;

#ifndef __vita__
#include "fox_load_inits.c"
#else
#include "sf64dma.h"

#define NO_SEGMENT \
    { NULL, NULL }

#define OVERLAY_OFFSETS(file)                                                                                   \
    NO_OVERLAY

#define NO_OVERLAY                                        \
    {                                                     \
        { NULL, NULL }, { NULL, NULL }, { NULL, NULL }, { \
            NULL, NULL                                    \
        }                                                 \
    }

#define ROM_SEGMENT(file) \
    NO_SEGMENT

Scene sNoOvl_Logo[1] = {
    { NO_OVERLAY,
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ NO_SEGMENT,
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_logo) } },
};

Scene sOvlending_Ending[6] = {
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ ROM_SEGMENT(ast_ending_award_front),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ ROM_SEGMENT(ast_ending_award_back),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ ROM_SEGMENT(ast_ending_expert),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ ROM_SEGMENT(ast_ending_expert),
        /* 0x9 */ ROM_SEGMENT(ast_font_3d),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlmenu_Title[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlmenu_Option[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_map),
        /* 0x7 */ ROM_SEGMENT(ast_vs_menu),
        /* 0x8 */ ROM_SEGMENT(ast_option),
        /* 0x9 */ ROM_SEGMENT(ast_font_3d),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlmenu_Map[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_map),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ ROM_SEGMENT(ast_font_3d),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlmenu_GameOver[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ ROM_SEGMENT(ast_andross),
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli1_Corneria[1] = {
    { OVERLAY_OFFSETS(ovl_i1),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_corneria),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli2_Meteo[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_meteo),
        /* 0x7 */ ROM_SEGMENT(ast_warp_zone),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_meteo),
        /* 0x7 */ ROM_SEGMENT(ast_warp_zone),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli5_Titania[6] = {
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_1),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ ROM_SEGMENT(ast_8_ti),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ ROM_SEGMENT(ast_8_ti),
        /* 0x9 */ ROM_SEGMENT(ast_9_ti),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ ROM_SEGMENT(ast_8_ti),
        /* 0x9 */ ROM_SEGMENT(ast_9_ti),
        /* 0xA */ ROM_SEGMENT(ast_A_ti),
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ ROM_SEGMENT(ast_8_ti),
        /* 0x9 */ ROM_SEGMENT(ast_9_ti),
        /* 0xA */ ROM_SEGMENT(ast_A_ti),
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli2_SectorX[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_sector_x),
        /* 0x7 */ ROM_SEGMENT(ast_warp_zone),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_sector_x),
        /* 0x7 */ ROM_SEGMENT(ast_warp_zone),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli4_SectorZ[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_sector_z),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Aquas[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_blue_marine),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_aquas),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Area6[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_area_6),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli4_Fortuna[2] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_fortuna),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_fortuna),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Unk4[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_area_6),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli6_SectorY[1] = {
    { OVERLAY_OFFSETS(ovl_i6),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_sector_y),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Solar[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_solar),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Zoness[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_zoness),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli1_Venom1[1] = {
    { OVERLAY_OFFSETS(ovl_i1),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_venom_1),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ ROM_SEGMENT(ast_ve1_boss),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli6_Andross[1] = {
    { OVERLAY_OFFSETS(ovl_i6),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_venom_2),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ ROM_SEGMENT(ast_andross),
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli6_Venom2[2] = {
    { OVERLAY_OFFSETS(ovl_i6),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_venom_2),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
    { OVERLAY_OFFSETS(ovl_i6),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_venom_2),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli2_Setup20[1] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_ve1_boss),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli4_Bolse[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_bolse),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
};

Scene sOvli4_Katina[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_katina),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
};

Scene sOvli5_Macbeth[2] = {
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_macbeth),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_macbeth),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli1_Training[1] = {
    { OVERLAY_OFFSETS(ovl_i1),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_training),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
};

Scene sOvli2_Versus[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_versus),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_vs_menu),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_versus),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_vs_menu),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlUnused_Unk[1] = {
    { OVERLAY_OFFSETS(ovl_unused),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ NO_SEGMENT,
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};
#endif

Scene sCurrentScene = {
    NO_OVERLAY,
    { /* 0x1 */ NO_SEGMENT,
      /* 0x2 */ NO_SEGMENT,
      /* 0x3 */ NO_SEGMENT,
      /* 0x4 */ NO_SEGMENT,
      /* 0x5 */ NO_SEGMENT,
      /* 0x6 */ NO_SEGMENT,
      /* 0x7 */ NO_SEGMENT,
      /* 0x8 */ NO_SEGMENT,
      /* 0x9 */ NO_SEGMENT,
      /* 0xA */ NO_SEGMENT,
      /* 0xB */ NO_SEGMENT,
      /* 0xC */ NO_SEGMENT,
      /* 0xD */ NO_SEGMENT,
      /* 0xE */ NO_SEGMENT,
      /* 0xF */ NO_SEGMENT },
};

void Load_RomFile(void* vRomAddress, void* dest, ptrdiff_t size) {
    s32 i;

    Lib_FillScreen(true);
    sFillTimer = 3;
    gGameStandby = true;
}

u8 Load_SceneFiles(Scene* scene) {
#if 1
    bool hasSceneChanged = memcmp(&sCurrentScene, scene, sizeof(Scene)) != 0;
    sCurrentScene = *scene;
    return hasSceneChanged;
#else
    u8* ramPtr = SEGMENT_VRAM_START(ovl_i1);
    u8 segment;
    u8 changeScene = false;

    if (scene->ovl.rom.start == (0, sCurrentScene.ovl.rom.start)) { // fake because D_800CBDD4 is probably 2D array
        ramPtr = ramPtr + SEGMENT_SIZE(scene->ovl.rom);
        ramPtr = ramPtr + SEGMENT_SIZE(scene->ovl.bss);
    } else {
        sCurrentScene.ovl.rom.start = scene->ovl.rom.start;
        sCurrentScene.ovl.rom.end = ramPtr;
        if (scene->ovl.rom.start != 0) {
            changeScene = true;
            Load_RomFile(scene->ovl.rom.start, ramPtr, SEGMENT_SIZE(scene->ovl.rom));
            ramPtr = ramPtr + SEGMENT_SIZE(scene->ovl.rom);
            bzero(scene->ovl.bss.start, SEGMENT_SIZE(scene->ovl.bss));
            ramPtr = ramPtr + SEGMENT_SIZE(scene->ovl.bss);
        }
    }
    segment = 0;
    while ((segment < 15) && (scene->assets[segment].start == sCurrentScene.assets[segment].start) &&
           (changeScene == false)) {
        if (scene->assets[segment].start != 0) {
            gSegments[segment + 1] = K0_TO_PHYS(ramPtr);
            gSPSegment(gUnkDisp1++, segment + 1, K0_TO_PHYS(ramPtr));
            ramPtr = ramPtr + SEGMENT_SIZE(scene->assets[segment]);
        }
        segment += 1; // can't be ++
    }
    for (segment; segment < 15; segment += 1) {
        sCurrentScene.assets[segment].start = scene->assets[segment].start;
        sCurrentScene.assets[segment].end = ramPtr;
        if (scene->assets[segment].start != 0) {
            gSegments[segment + 1] = K0_TO_PHYS(ramPtr);
            gSPSegment(gUnkDisp1++, segment + 1, K0_TO_PHYS(ramPtr));
            Load_RomFile(scene->assets[segment].start, ramPtr, SEGMENT_SIZE(scene->assets[segment]));
            ramPtr = ramPtr + SEGMENT_SIZE(scene->assets[segment]);
        }
    }

    if (sFillTimer != 0) {
        sFillTimer--;
    } else if (gStartNMI == 0) {
        Lib_FillScreen(false);
    }
    return changeScene;
#endif
}

u8 Load_SceneSetup(u8 sceneId, u8 sceneSetup) {
    u8 changeScene;

    switch (sceneId) {
        case SCENE_TITLE:
            changeScene = Load_SceneFiles(&sOvlmenu_Title[sceneSetup]);
            if (changeScene == true) {
                AUDIO_SET_SPEC(SFXCHAN_0, AUDIOSPEC_22);
            }
            break;
        case SCENE_MENU:
            changeScene = Load_SceneFiles(&sOvlmenu_Option[sceneSetup]);
            break;
        case SCENE_MAP:
            changeScene = Load_SceneFiles(&sOvlmenu_Map[sceneSetup]);
            break;
        case SCENE_GAME_OVER:
            changeScene = Load_SceneFiles(&sOvlmenu_GameOver[sceneSetup]);
            break;
        case SCENE_CORNERIA:
            changeScene = Load_SceneFiles(&sOvli1_Corneria[sceneSetup]);
            break;
        case SCENE_METEO:
            changeScene = Load_SceneFiles(&sOvli2_Meteo[sceneSetup]);
            break;
        case SCENE_TITANIA:
            changeScene = Load_SceneFiles(&sOvli5_Titania[sceneSetup]);
            break;
        case SCENE_SECTOR_X:
            changeScene = Load_SceneFiles(&sOvli2_SectorX[sceneSetup]);
            break;
        case SCENE_SECTOR_Z:
            changeScene = Load_SceneFiles(&sOvli4_SectorZ[sceneSetup]);
            break;
        case SCENE_AQUAS:
            changeScene = Load_SceneFiles(&sOvli3_Aquas[sceneSetup]);
            break;
        case SCENE_AREA_6:
            changeScene = Load_SceneFiles(&sOvli3_Area6[sceneSetup]);
            break;
        case SCENE_FORTUNA:
            changeScene = Load_SceneFiles(&sOvli4_Fortuna[sceneSetup]);
            break;
        case SCENE_UNK_4:
            changeScene = Load_SceneFiles(&sOvli3_Unk4[sceneSetup]);
            break;
        case SCENE_SECTOR_Y:
            changeScene = Load_SceneFiles(&sOvli6_SectorY[sceneSetup]);
            break;
        case SCENE_SOLAR:
            changeScene = Load_SceneFiles(&sOvli3_Solar[sceneSetup]);
            break;
        case SCENE_ZONESS:
            changeScene = Load_SceneFiles(&sOvli3_Zoness[sceneSetup]);
            break;
        case SCENE_VENOM_ANDROSS:
            changeScene = Load_SceneFiles(&sOvli6_Andross[sceneSetup]);
            break;
        case SCENE_TRAINING:
            changeScene = Load_SceneFiles(&sOvli1_Training[sceneSetup]);
            break;
        case SCENE_VENOM_1:
            changeScene = Load_SceneFiles(&sOvli1_Venom1[sceneSetup]);
            break;
        case SCENE_VENOM_2:
            changeScene = Load_SceneFiles(&sOvli6_Venom2[sceneSetup]);
            break;
        case SCENE_20:
            changeScene = Load_SceneFiles(&sOvli2_Setup20[sceneSetup]);
            break;
        case SCENE_BOLSE:
            changeScene = Load_SceneFiles(&sOvli4_Bolse[sceneSetup]);
            break;
        case SCENE_KATINA:
            changeScene = Load_SceneFiles(&sOvli4_Katina[sceneSetup]);
            break;
        case SCENE_MACBETH:
            changeScene = Load_SceneFiles(&sOvli5_Macbeth[sceneSetup]);
            break;
        case SCENE_VERSUS:
            changeScene = Load_SceneFiles(&sOvli2_Versus[sceneSetup]);
            if (changeScene == true) {
                AUDIO_SET_SPEC_ALT(SFXCHAN_3, AUDIOSPEC_16);
            }
            break;
        case SCENE_LOGO:
            changeScene = Load_SceneFiles(&sNoOvl_Logo[sceneSetup]); // Logo does not load an overlay file
            if (changeScene == true) {
                AUDIO_SET_SPEC(SFXCHAN_0, AUDIOSPEC_MA);
            }
            break;
        case SCENE_CREDITS:
            changeScene = Load_SceneFiles(&sOvlending_Ending[sceneSetup]);
            break;
        default:
            PRINTF("DMA MODE ERROR %d\n");
            changeScene = false;
            break;
    }
    return changeScene;
}

void Load_InitDmaAndMsg(void) {
    // Lib_DmaRead(SEGMENT_ROM_START(dma_table), SEGMENT_VRAM_START(dma_table), SEGMENT_ROM_SIZE(dma_table));
    // Load_RomFile(SEGMENT_ROM_START(ast_radio), SEGMENT_VRAM_START(ast_radio), SEGMENT_ROM_SIZE(ast_radio));
}
