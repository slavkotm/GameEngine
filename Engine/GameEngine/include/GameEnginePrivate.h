#ifndef _GAME_ENGINE_PRIVATE_H_
#define _GAME_ENGINE_PRIVATE_H_

#include "GameEnginePublic.h"
#include "GameEngineCorePublic.h"

typedef struct _GameEngine_t
{
	GameEngineCore_t *pGameEngineCore;
	char *nameEngine;
	int versionEngine;
	int graphicsAPI;
} _GameEngine_t;

#endif /* _GAME_ENGINE_PRIVATE_H_ */
