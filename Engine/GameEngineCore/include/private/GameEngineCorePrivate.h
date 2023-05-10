#ifndef _GAME_ENGINE_CORE_PRIVATE_H_
#define _GAME_ENGINE_CORE_PRIVATE_H_

#include "GameEngineCorePublic.h"
#include "GameEngineRendererPublic.h"
#include "GameEnginePhysicsPublic.h"

typedef struct _GameEngineCore_t
{
    void* (*createScene)(void *scene);
    void (*deleteScene)(void *scene);
    void (*updateScene)(void *scene);
    void *scene;
    void (*run)(void *scene);
    GameEngineRenderer_t *pGameEngineRenderer;
    GameEnginePhysics_t *pGameEnginePhysics;
} _GameEngineCore_t;

#endif /* _GAME_ENGINE_CORE_PRIVATE_H_ */
