#include <iostream>
#include <random>
#include <SDL2/SDL.h>

int main() {
    //create a window
    SDL_Window *window;
    SDL_Surface *screen;
    SDL_Rect rect;
    SDL_Event event;

    int gameRunning{1};

    rect.w = 100;
    rect.h = 100;

    //Initialize the game and create the window
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("test window",0,0,800,600,0);

    screen = SDL_GetWindowSurface(window);

    //game loop
    while(gameRunning){
        rect.x = rand() % 700;
        rect.y = rand() % 500;

        SDL_FillRect(screen, &rect, rand());
        SDL_UpdateWindowSurface(window);

        while(SDL_PollEvent(&event)){
            if (event.type == SDL_QUIT){
                gameRunning = 0;
            }
        }
    }










    return 0;
}
