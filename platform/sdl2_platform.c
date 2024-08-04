#include "platform_def.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keycode.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

static SDL_Window *window;
static SDL_Renderer *renderer;
static bool should_quit = false;
static SDL_Event event;

static bool key_states[512] = {0};

void platform_init(int w, int h, const char *title) {
  SDL_Init(SDL_INIT_EVERYTHING);
  window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED, w, h, 0);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

void platform_clear_background(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  SDL_SetRenderDrawColor(renderer, r, g, b, a);
  SDL_RenderClear(renderer);
}

bool platform_should_close() { return should_quit; }

void platform_draw_rectangle(uint8_t r, uint8_t g, uint8_t b, uint8_t a, int x,
                             int y, int w, int h) {
  SDL_SetRenderDrawColor(renderer, r, g, b, a);
  const SDL_Rect rect = {x, y, w, h};
  SDL_RenderFillRect(renderer, &rect);
}

// TODO: Implement this...
double platform_get_delta() { return -1; }

void platform_end_drawing() { SDL_RenderPresent(renderer); }
void platform_begin_drawing() {
  while (SDL_PollEvent(&event)) {
    if (event.type == SDL_KEYDOWN) {
      if (event.key.keysym.sym < 512) {
        key_states[event.key.keysym.sym] = true;
      }
    } else if (event.type == SDL_KEYUP) {
      if (event.key.keysym.sym < 512) {
        key_states[event.key.keysym.sym] = false;
      }
    } else if (event.type == SDL_QUIT) {
      should_quit = true;
    }
  }
}

bool platform_key_down(enum Key k) { return key_states[k]; }
