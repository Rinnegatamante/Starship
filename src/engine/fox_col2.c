#include "global.h"

#ifndef __vita__
#include "fox_colheaders.c"
#else
#include "macros.h"
#include "variables.h"
#include "assets/ast_aquas.h"
#include "assets/ast_bolse.h"
#include "assets/ast_meteo.h"
#include "assets/ast_corneria.h"
#include "assets/ast_macbeth.h"
#include "assets/ast_venom_2.h"
#include "assets/ast_fortuna.h"
#include "assets/ast_sector_y.h"
#include "assets/ast_sector_z.h"
#include "assets/ast_versus.h"
#include "assets/ast_zoness.h"

Vec3f D_800D2920[16] = {
    { 1075.0f, 0.0f, 0.0f },   { 746.0f, 0.0f, -746.0f },    { 202.0f, 361.0f, -202.0f }, { 0.0f, 0.0f, -1075.0f },
    { 291.0f, 558.0f, 0.0f },  { 0.0f, 354.0f, -291.0f },    { 202.0f, 594.0f, 202.0f },  { 772.0f, 0.0f, 622.0f },
    { 0.0f, 473.0f, 291.0f },  { 144.0f, 0.0f, 1075.0f },    { -202.0f, 461.0f, 202.0f }, { -515.0f, 0.0f, 746.0f },
    { -291.0f, 453.0f, 0.0f }, { -372.0f, 390.0f, -281.0f }, { -951.0f, 0.0f, 0.0f },     { -746.0f, 0.0f, -746.0f },
};
Triangle D_800D29E0[22] = {
    { 0, 1, 2 },  { 2, 1, 3 },   { 4, 2, 5 },   { 3, 5, 2 },    { 2, 4, 0 },    { 4, 6, 7 },
    { 7, 0, 4 },  { 6, 4, 5 },   { 7, 6, 8 },   { 8, 9, 7 },    { 8, 10, 11 },  { 10, 8, 6 },
    { 11, 9, 8 }, { 12, 10, 6 }, { 6, 13, 12 }, { 14, 12, 13 }, { 10, 12, 14 }, { 14, 11, 10 },
    { 5, 13, 6 }, { 5, 3, 15 },  { 15, 13, 5 }, { 13, 15, 14 },
};
Triangle D_800D2A64[13] = {
    { 0, 1, 2 }, { 2, 3, 4 }, { 2, 5, 0 }, { 4, 5, 2 }, { 4, 3, 6 },  { 4, 7, 5 },  { 8, 7, 4 },
    { 4, 6, 8 }, { 7, 8, 9 }, { 0, 7, 9 }, { 5, 7, 0 }, { 9, 10, 0 }, { 10, 1, 0 },
};
Vec3f D_800D2AB4[11] = {
    { -218.0f, 131.0f, 0.0f }, { -435.0f, 0.0f, 0.0f },     { -336.0f, 0.0f, 218.0f },  { 0.0f, 0.0f, 435.0f },
    { 0.0f, 160.0f, 218.0f },  { -168.0f, 131.0f, 109.0f }, { 336.0f, 0.0f, 218.0f },   { 0.0f, 174.0f, 0.0f },
    { 435.0f, 0.0f, -204.0f }, { 0.0f, 0.0f, -435.0f },     { -318.0f, 0.0f, -218.0f },
};

CollisionHeader D_800D2B38[10] = {
    {
        { -1128.0f, -1835.0f, -1202.0f },
        { 997.0f, 139.0f, 1360.0f },
        79,
        D_ME_602FA9C,
        D_ME_60300C8,
    },
    {
        { -3006.0f, -2274.0f, -4530.0f },
        { 3015.0f, 3348.0f, 5246.0f },
        236,
        D_ME_60305DC,
        D_ME_603184C,
    },
    {
        { -152.0f, -200.0f, -152.0f },
        { 165.0f, 204.0f, 181.0f },
        42,
        D_ME_6030208,
        D_ME_6030550,
    },
    {
        { -1704.0f, -1006.0f, -4751.0f },
        { 1704.0f, 1030.0f, 4842.0f },
        174,
        D_SY_6033070,
        D_SY_6033E08,
    },
    {
        { -1308.0f, 0.0f, -1460.0f },
        { 1310.0f, 666.0f, 807.0f },
        93,
        D_FO_600F60C,
        D_FO_600FD50,
    },
    {
        { -951.0f, 0.0f, -1075.0f },
        { 1075.0f, 1014.0f, 1075.0f },
        22,
        D_FO_600F3F4,
        D_FO_600F5AC,
    },
    {
        { -951.0f, 0.0f, -1075.0f },
        { 1075.0f, 384.0f, 1075.0f },
        22,
        D_FO_600F1DC,
        D_FO_600F394,
    },
    {
        { -1554.0f, -2.0f, -1401.0f },
        { 1554.0f, 590.0f, 1401.0f },
        262,
        D_BO_6010294,
        D_BO_601170C,
    },
    {
        { -1386.0f, -696.0f, -2274.0f },
        { 1386.0f, 1033.0f, 1833.0f },
        316,
        D_SZ_6007558,
        D_SZ_6008E08,
    },
    {
        { -671.0f, 0.0f, -671.0f },
        { 671.0f, 648.0f, 671.0f },
        250,
        D_VE2_6014FEC,
        D_VE2_6016374,
    },
};

CollisionHeader2 D_800D2CA0[19] = {
    {
        { -951.0f, 0.0f, -1075.0f },
        { 1075.0f, 594.0f, 1075.0f },
        22,
        D_800D29E0,
        D_800D2920,
    },
    {
        { -1220.0f, 0.0f, -1315.0f },
        { 1403.0f, 174.0f, 1308.0f },
        13,
        D_CO_603F338,
        D_CO_603F388,
    },
    {
        { -1311.0f, 0.0f, -1120.0f },
        { 1266.0f, 1465.0f, 1266.0f },
        36,
        D_CO_603F40C,
        D_CO_603F4E4,
    },
    {
        { -435.0f, -10.0f, -435.0f },
        { 435.0f, 174.0f, 435.0f },
        13,
        D_800D2A64,
        D_800D2AB4,
    },
    {
        { -498.0f, -10.0f, -498.0f },
        { 498.0f, 705.0f, 498.0f },
        4,
        D_versus_302EEE8,
        D_versus_302EF00,
    },
    {
        { -1494.0f, -30.0f, -1494.0f },
        { 1494.0f, 2115.0f, 1494.0f },
        4,
        D_versus_302EF6C,
        D_versus_302EF84,
    },
    {
        { -623.0f, -10.0f, -623.0f },
        { 623.0f, 200.0f, 623.0f },
        4,
        D_versus_302EFF0,
        D_versus_302F008,
    },
    {
        { -488.0f, 0.0f, -568.0f },
        { 488.0f, 148.0f, 567.0f },
        30,
        D_ZO_602CACC,
        D_ZO_602CB80,
    },
    {
        { -900.0f, -110.0f, -1900.0f },
        { 900.0f, 190.0f, 100.0f },
        2,
        D_MA_6030E74,
        D_MA_6030E80,
    },
    {
        { -900.0f, -100.0f, -1000.0f },
        { 900.0f, 250.0f, 100.0f },
        2,
        D_MA_6030EB0,
        D_MA_6030EBC,
    },
    {
        { -900.0f, -190.0f, -1900.0f },
        { 900.0f, 100.0f, 100.0f },
        2,
        D_MA_6030EEC,
        D_MA_6030EF8,
    },
    {
        { -500.0f, -250.0f, -1010.0f },
        { 500.0f, 100.0f, 100.0f },
        2,
        D_MA_6030F28,
        D_MA_6030F34,
    },
    {
        { -1200.0f, 0.0f, -1800.0f },
        { 0.0f, 900.0f, 1500.0f },
        4,
        D_MA_6030F64,
        D_MA_6030F7C,
    },
    {
        { -400.0f, 0.0f, -900.0f },
        { 400.0f, 0.0f, 0.0f },
        2,
        D_MA_6030FC4,
        D_MA_6030FD0,
    },
    {
        { -74.0f, 0.0f, -84.0f },
        { 74.0f, 125.0f, 84.0f },
        30,
        D_AQ_60320B8,
        D_AQ_603216C,
    },
    {
        { -1200.0f, 0.0f, -1315.0f },
        { 1403.0f, 200.0f, 1308.0f },
        8,
        D_AQ_6031FB0,
        D_AQ_6031FE0,
    },
    {
        { -600.0f, 0.0f, -657.0f },
        { 701.0f, 100.0f, 654.0f },
        8,
        D_AQ_6031FB0,
        D_AQ_603204C,
    },
    {
        { -2965.0f, -16.0f, -2965.0f },
        { 2965.0f, 544.0f, 2965.0f },
        14,
        D_versus_302F044,
        D_versus_302F098,
    },
    {
        { -814.0f, 0.0f, -691.0f },
        { 814.0f, 752.0f, 691.0f },
        28,
        D_AQ_6032388,
        D_AQ_6032430,
    },
};
#endif

bool func_col2_800A36FC(Vec3f* objPos, Vec3f* colliderPos, CollisionHeader2* colHeader, Vec3f* hitDataOut);
bool func_col2_800A3A74(Vec3f* point, Vec3f** tri, Vec3f* normOut);

bool func_col2_800A3690(Vec3f* objPos, Vec3f* colliderPos, s32 colId, Vec3f* hitDataOut) {
    return func_col2_800A36FC(objPos, colliderPos, LOAD_ASSET(&D_800D2CA0[colId]), hitDataOut);
}

bool func_col2_800A36FC(Vec3f* objPos, Vec3f* colliderPos, CollisionHeader2* colHeader, Vec3f* hitDataOut) {
    Vec3f objRelPos;
    PlaneF triPlane;
    bool above;
    s32 i;
    s32 j;
    Vec3f* tri[3];
    Vec3f norm;
    Vec3f vtx;
    s32 sp38 = false;
    s32 count;
    Triangle* polys;
    Vec3f* mesh;

    objRelPos.x = objPos->x - colliderPos->x;
    objRelPos.y = objPos->y - colliderPos->y;
    objRelPos.z = objPos->z - colliderPos->z;

    if ((objRelPos.x < colHeader->min.x) || (objRelPos.y < colHeader->min.y) || (objRelPos.z < colHeader->min.z) ||
        (colHeader->max.x < objRelPos.x) || (colHeader->max.y < objRelPos.y) || (colHeader->max.z < objRelPos.z)) {
        return false;
    }

    above = false;
    count = colHeader->polyCount;

    polys = SEGMENTED_TO_VIRTUAL(colHeader->polys);
    mesh = SEGMENTED_TO_VIRTUAL(colHeader->mesh);

    for (i = 0; i < count; i++, polys++) {
        for (j = 0; j < 3; j++) {
            tri[j] = &mesh[polys->vtx[j]];
        }
        above = func_col2_800A3A74(&objRelPos, tri, &norm);
        if (above) {
            break;
        }
    }

    if (above) {
        vtx.x = tri[0]->x;
        vtx.y = tri[0]->y;
        vtx.z = tri[0]->z;

        func_col1_80098860(&triPlane, &vtx, &norm);
        hitDataOut->y = func_col1_800988B4(&objRelPos, &triPlane);

        if (triPlane.normal.x != 0.0f) {
            norm.x = -triPlane.dist / triPlane.normal.x;
        } else {
            norm.x = 0.0f;
        }
        if (triPlane.normal.y != 0.0f) {
            norm.y = -triPlane.dist / triPlane.normal.y;
        } else {
            norm.y = 0.0f;
        }
        if (triPlane.normal.z != 0.0f) {
            norm.z = -triPlane.dist / triPlane.normal.z;
        } else {
            norm.z = 0.0f;
        }

        hitDataOut->x = Math_Atan2F_XY(norm.y, norm.z);
        if (norm.z != 0.0f) {
            hitDataOut->z = -Math_Atan2F_XY(__sinf(Math_Atan2F_XY(norm.y, norm.z)) * norm.z, norm.x);
        } else if (hitDataOut->x >= M_PI) {
            hitDataOut->z = Math_Atan2F_XY(norm.y, norm.x);
        } else {
            hitDataOut->z = -Math_Atan2F_XY(norm.y, norm.x);
        }

        if ((objPos->y - hitDataOut->y <= 0.0f) || (gCurrentLevel == LEVEL_MACBETH)) {
            sp38 = true;
        }
    }
    return sp38;
}

// Checks if point is above the triangle tri. If so, puts the triangle normal in normOut
bool func_col2_800A3A74(Vec3f* point, Vec3f** tri, Vec3f* normOut) {
    s32 pad;
    f32 temp1;
    bool ret = false;
    f32 temp_fv0;
    Vec3f vtx1;
    Vec3f vtx2;
    Vec3f vtx3;
    f32 ptx;
    f32 ptz;

    vtx1.x = (*tri)->x;
    vtx1.y = (*tri)->y;
    vtx1.z = (*tri)->z;
    tri++;
    vtx2.x = (*tri)->x;
    vtx2.y = (*tri)->y;
    vtx2.z = (*tri)->z;
    tri++;
    vtx3.x = (*tri)->x;
    vtx3.y = (*tri)->y;
    vtx3.z = (*tri)->z;
    tri++;

    ptx = point->x;
    ptz = point->z;

    temp1 = ((vtx2.z - vtx1.z) * (ptx - vtx2.x)) - ((vtx2.x - vtx1.x) * (ptz - vtx2.z));
    if (temp1 >= 0.0f) {
        if (((vtx3.x - vtx2.x) * (ptz - vtx3.z)) <= ((vtx3.z - vtx2.z) * (ptx - vtx3.x))) {
            if (((vtx1.x - vtx3.x) * (ptz - vtx1.z)) <= ((vtx1.z - vtx3.z) * (ptx - vtx1.x))) {
                ret = true;
                normOut->x = ((vtx2.y - vtx1.y) * (vtx3.z - vtx2.z)) - ((vtx2.z - vtx1.z) * (vtx3.y - vtx2.y));
                normOut->y = ((vtx2.z - vtx1.z) * (vtx3.x - vtx2.x)) - ((vtx2.x - vtx1.x) * (vtx3.z - vtx2.z));
                normOut->z = ((vtx2.x - vtx1.x) * (vtx3.y - vtx2.y)) - ((vtx2.y - vtx1.y) * (vtx3.x - vtx2.x));
                if ((normOut->x != 0.0f) || (normOut->y != 0.0f) || (normOut->z != 0.0f)) {
                    temp_fv0 = VEC3F_MAG(normOut);
                    if (temp_fv0 != 0) {
                        normOut->x = (normOut->x / temp_fv0) * 127.0f;
                        normOut->y = (normOut->y / temp_fv0) * 127.0f;
                        normOut->z = (normOut->z / temp_fv0) * 127.0f;
                    }
                }
            }
        }
    }
    return ret;
}
