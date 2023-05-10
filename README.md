# Short description of GameEngine

Game engine development. At the moment, a specific name for the engine has not yet been invented, 
so it will simply be the name - the game engine. The main idea of creating a game engine is that it 
will be completely independent of a specific platform and certain programs that work with graphics and input. 
Basically, the development of a game engine consists of the interaction of the separately described physical 
part of the engine, graphics, sound, and user input. Another important point is that the four main components 
described above are separate from each other and do not depend in any way, so that they can be described 
in completely different ways. For rendering, a graphical cross-platform api (Vulkan) will be used, a 
library (Soloud) for the sound component, and the library (SDL) will process the input, physics will 
be implemented independently, but then physical engines will be used to demonstrate and test the engine. 
The programming language that will be used is C, in the future it will be possible to switch to C++, 
taking into account the growth of a large amount of functionality and plus with insufficient knowledge of the C++ language 
itself, plus the choice fell on the C language also because it is very simple and it can be easily used, although there is 
absolutely manual memory management, but this helps to clearly see how the program works and in the future to fix bugs that 
will arise during development. Well, go ahead!
