#ifndef _GAME_ENGINE_H_
#define _GAME_ENGINE_H_

#include "GameEnginePublic.h"

enum GraphicsAPI 
{
	VULKAN = 1, //default
	OPENGL = 2,
	CUSTOM = 3,
	CONSOLE = 4
};

int gameEngine_sizeof();

GameEngine_t *gameEngine_create();

void gameEngine_init(void *memory,
					 void *pGameEngineCore,
					 int  graphicsAPI,
					 int  versionEngine);

void gameEngine_delete(GameEngine_t *engine);

#endif /* _GAME_ENGINE_H_ */
