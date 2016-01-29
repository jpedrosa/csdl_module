#include "SDL.h"
#include "SDL_ttf.h"
#include <stdlib.h>


int main(int argc, char *argv[]) {

  printf("Hello SDL\n");

  SDL_Window* window = NULL;

  SDL_Surface* screenSurface = NULL;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL failed to initialize! Error: %s\n", SDL_GetError());
  }

  TTF_Font* Sans = TTF_OpenFont("Sans.ttf", 24);

  printf("%u\n", SDL_WINDOW_SHOWN);
  printf("%u\n", SDL_WINDOWEVENT);
  printf("%u\n", SDL_WINDOWEVENT_CLOSE);

  return 0;
}
