cmake_minimum_required(VERSION 3.20)
project(SDL_Clion_template)
set(CMAKE_CXX_STANDARD 14)
#
add_executable(SDL_Clion_template src/main.cpp)

#Don't change this OR point this to: {Your SDL library path}/lib/cmake/sdl2.
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${PROJECT_SOURCE_DIR}/lib/cmake/SDL2)

#Don't change this OR point this to where your SDL library is placed
set(SDL2_DIR ${PROJECT_SOURCE_DIR})

#Don't change this. Creates a variable that stores where our library files are located
set(SDL2_LIB_DIR ${SDL2_DIR}/lib)

#Don't change this. Includes the SDL headers
include_directories(${SDL2_DIR}/include)

#Dont change this. Set what libraries to link up. Keep this the same unless you know what your doing.
target_link_libraries(SDL_Clion_template ${SDL2_LIB_DIR}/libSDL2.dll.a ${SDL2_LIB_DIR}/libSDL2main.a ${SDL2_LIB_DIR}/libSDL2.a  -mwindows -lmingw32 -lSDL2main -lSDL2)
add_definitions(-DSDL_MAIN_HANDLED)

