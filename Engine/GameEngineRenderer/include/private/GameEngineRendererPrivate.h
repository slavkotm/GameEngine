#ifndef _GAME_ENGINE_RENDERER_PRIVATE_H_
#define _GAME_ENGINE_RENDERER_PRIVATE_H_

#include "GameEngineRendererPublic.h"
/*
 *
 */
typedef struct _GameEngineRenderer_t
{
    void* (*create)(void *renderer);
    void (*rendererFunction)(void *renderer, void *o);
    void (*destroy)(void *renderer);
    void *renderer;
} _GameEngineRenderer_t;

#endif /* _GAME_ENGINE_RENDERER_PRIVATE_H_ */