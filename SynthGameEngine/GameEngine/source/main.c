#include "GameEngine.h"
#include "GameEnginePrivate.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>
#include "GameEngineRenderer.h"
#include "GameEnginePhysics.h"
#include "GameEnginePhysicsPrivate.h"

typedef struct init_sdl
{
	SDL_Window *win;
	SDL_Event event;
} init_sdl;

void run(void *o)
{
	printf("Hello World!!!\n");
}

void init(void *o)
{
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Vulkan_LoadLibrary(NULL);

	init_sdl *_o = (init_sdl *)o;
	//_o->win = SDL_CreateWindow
}

int main(int argc, char **args)
{
	GameEngine_t *engine = (GameEngine_t *)malloc(sizeof(GameEngine_t));
	GameEnginePhysics_t *engP = (GameEnginePhysics_t *)malloc(sizeof(GameEnginePhysics_t));
	//engine->run = run;
	//GameEngineRenderer_t *renderer = (GameEngineRenderer_t *)malloc(sizeof(GameEngineRenderer_t));
	//renderer->pGameEngineRenderer = NULL;

	//engine->run(NULL);

	return 0;
}