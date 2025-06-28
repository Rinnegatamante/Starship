#pragma once

#define LOAD_ASSET(path) (path == NULL ? NULL : (GameEngine_OTRSigCheck((const char*) path) ? ResourceGetDataByName((const char*) path) : path))
#define LOAD_ASSET_RAW(path) ResourceGetDataByName((const char*) path)

struct GamePool {
    unsigned long chunk;
    unsigned long cursor;
    unsigned long length;
    void* memory;
};

#ifdef __cplusplus
#include <vector>
#include <Fast3D/gfx_pc.h>
#include "libultraship/src/Context.h"



class GameEngine {
  public:
    static GameEngine* Instance;

    std::shared_ptr<Ship::Context> context;

    GameEngine();
    static void Create();
    void StartFrame() const;
    static void HandleAudioThread();
    static void ProcessAudioTask(s16* audio_buffer);
    static void StartAudioFrame();
    static void EndAudioFrame();
    static void AudioInit();
    static void AudioExit();
#ifdef __vita__
    static void RunCommands(Gfx* Commands);
#else
    static void RunCommands(Gfx* Commands, const std::vector<std::unordered_map<Mtx*, MtxF>>& mtx_replacements);
#endif
    void ProcessFrame(void (*run_one_game_iter)()) const;
    static void Destroy();
    static void ProcessGfxCommands(Gfx* commands);
    static uint32_t GetInterpolationFPS();
};

extern "C" void* GameEngine_Malloc(size_t size);


#define memallocn(type, n) (type*) GameEngine_Malloc(sizeof(type) * n)
#define memalloc(type) memallocn(type, 1)

#else
#include <stdint.h>

void GameEngine_ProcessGfxCommands(Gfx* commands);
float GameEngine_GetAspectRatio();
uint8_t GameEngine_OTRSigCheck(char* imgData);
uint32_t OTRGetCurrentWidth(void);
uint32_t OTRGetCurrentHeight(void);
float OTRGetAspectRatio(void);
int32_t OTRConvertHUDXToScreenX(int32_t v);
float OTRGetDimensionFromLeftEdge(float v);
float OTRGetDimensionFromRightEdge(float v);
int16_t OTRGetRectDimensionFromLeftEdge(float v);
int16_t OTRGetRectDimensionFromRightEdge(float v);
uint32_t OTRGetGameRenderWidth();
uint32_t OTRGetGameRenderHeight();
void* GameEngine_Malloc(size_t size);
#define memalloc(size) GameEngine_Malloc(size)
#endif