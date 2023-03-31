# gcc compiler
CC = gcc

# g++ compiler
CXX = g++

# flags for compilation
CC_FLAGS = -Wall
CXX_FLAGS = -Wall -std=c++17

# libraries
LIBS = -lSDL2 -lvulkan 
LIBS_TUTORIAL = -lglfw -lvulkan

# variables
FINAL           = GameEngine
FINAL_TUTORIAL  = GameEngineTutorialGLFW

# directories
CUR                          = $(shell pwd)

GAME_ENGINE_SRC              = $(CUR)/GameEngine/source
GAME_ENGINE_INCLUDE          = $(CUR)/GameEngine/include
GAME_ENGINE_DIR              = $(CUR)/GameEngine

GAME_ENGINE_CORE_INCLUDE     = $(CUR)/GameEngineCore/include
GAME_ENGINE_CORE_DIR         = $(CUR)/GameEngineCore
GAME_ENGINE_CORE_SRC         = $(CUR)/GameEngineCore/source

GAME_ENGINE_RENDERER_DIR     = $(CUR)/GameEngineRenderer
GAME_ENGINE_RENDERER_INCLUDE = $(CUR)/GameEngineRenderer/include
GAME_ENGINE_RENDERER_SRC     = $(CUR)/GameEngineRenderer/source

GAME_ENGINE_PHYSICS_DIR      = $(CUR)/GameEnginePhysics
GAME_ENGINE_PHYSICS_INCLUDE  = $(CUR)/GameEnginePhysics/include
GAME_ENGINE_PHYSICS_SRC      = $(CUR)/GameEnginePhysics/source

BIN                          = $(CUR)/GameEngineBinary

####################################################################
# Compiling process
$(FINAL): $(GAME_ENGINE_SRC)/main.c
	mkdir -p $(BIN) 
	$(CC) $(CC_FLAGS) -I$(GAME_ENGINE_CORE_INCLUDE)/ -I$(GAME_ENGINE_CORE_INCLUDE)/public/ -I$(GAME_ENGINE_CORE_INCLUDE)/private/ \
	-I$(GAME_ENGINE_INCLUDE)/ -I$(GAME_ENGINE_INCLUDE)/public/ -I$(GAME_ENGINE_INCLUDE)/private/ \
	-I$(GAME_ENGINE_RENDERER_INCLUDE)/ -I$(GAME_ENGINE_RENDERER_INCLUDE)/public/ -I$(GAME_ENGINE_RENDERER_INCLUDE)/private/ \
	-I$(GAME_ENGINE_PHYSICS_INCLUDE)/ -I$(GAME_ENGINE_PHYSICS_INCLUDE)/public/ -I$(GAME_ENGINE_PHYSICS_INCLUDE)/private/ \
	$< -o $(BIN)/$(FINAL) $(LIBS)  

# Compiling Tutorial Code
$(FINAL_TUTORIAL): $(GAME_ENGINE_SRC)/main.cpp
	mkdir -p $(BIN) 
	$(CXX) $(CXX_FLAGS) $< -o $(BIN)/$(FINAL_TUTORIAL) $(LIBS_TUTORIAL)

run:
	$(BIN)/./$(FINAL)

run_tutorial: 
	$(BIN)/./$(FINAL_TUTORIAL)

clean: 
	rm -r $(BIN)
