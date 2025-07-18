#include "global.h"
#include "assets/ast_arwing.h"
#include "assets/ast_ending_expert.h"
#include "assets/ast_allies.h"
#include "port/mods/PortEnhancements.h"

ArwingInfo D_ending_80198590;
Vec3f D_ending_801985D0;
Vec3f D_ending_801985E0;
Vec3f D_ending_801985F0;
Vec3f D_ending_80198600[300];

bool sTagged = false;

#ifdef __vita__
#include "fox_end2_data.c.exclude"
#else
#include "fox_end2_data.c"
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
                        RCP_SetupDL(&gMasterDisp, SETUPDL_83_OPTIONAL);
                        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
                        Graphics_DisplayLargeText(xPos, D_ending_80192E74[i].unk_0E, 1.0f, 1.0f,
                                                  D_ending_80192E74[i].unk_00);

                    } else if (D_ending_80192E74[i].unk_10 == 2) {
                        RCP_SetupDL(&gMasterDisp, SETUPDL_83_OPTIONAL);
                        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
                        Lib_TextureRect_IA8(&gMasterDisp, D_ending_80192E74[i].unk_00, 192, 30, 64.0f, 105.0f, 1.0f,
                                            1.0f);
                    } else {
                        xPos = (320 - Graphics_GetSmallTextWidth(D_ending_80192E74[i].unk_00)) / 2;
                        RCP_SetupDL(&gMasterDisp, SETUPDL_83_OPTIONAL);
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

    RCP_SetupDL(&gMasterDisp, SETUPDL_83_OPTIONAL);

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

    RCP_SetupDL(&gMasterDisp, SETUPDL_76_OPTIONAL);

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

    RCP_SetupDL(&gMasterDisp, SETUPDL_76_OPTIONAL);
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

    for (i = 0; i < 10; i++) {
        temp4[i] = 0;
        unk40[i] = gSaveFile.save.data.rankingLives[i];

        for (j = 0; j < 7; j++) {
            temp4[i] +=
                gSaveFile.save.data.stats[i][j].hitCount + (gSaveFile.save.data.stats[i][j].hitCountOver256 * 256);
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
    int interpolatedFrames = GameEngine_GetInterpolationFrameCount();

    float scrollArg = arg0 * 14;
    float inc = 14 / (float) interpolatedFrames;

    for (int i = 0; i < interpolatedFrames; i++) {
        gDPSetInterpolation(gMasterDisp++, i);

        gDPSetupTile2(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, scrollArg, 0, G_TX_NOMIRROR | G_TX_WRAP,
                      G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD);

        gDPSetTileSizeInterp(gMasterDisp, G_TX_RENDERTILE, scrollArg, 0, 32 << 2, 0);

        gMasterDisp += 3;

        scrollArg += inc;
    }

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

void Ending_80191234(u32 arg0, AssetInfo* asset) {
    gLastGameState = GSTATE_ENDING;
    gGameState = GSTATE_MENU;
    gNextGameStateTimer = 2;
    gOptionMenuStatus = OPTION_WAIT;
    gDrawMode = DRAW_NONE;
    gBgColor = 0;
    gStarCount = 0;
    gControllerLock = 10;

    // @port: Ending seen at least once.
    gSaveFile.save.data.padEE[0] = 1;
    Save_Write();
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
    if (gSaveFile.save.data.padEE[0] == 1) {
        gControllerLock = 0;
    } else {
        gControllerLock = 10000;
    }

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
