#include "platform_def.h"
#include <raylib.h>

void platform_init(int w, int h, const char *title) { InitWindow(w, h, title); }
bool platform_should_close() { return WindowShouldClose(); }

void platform_begin_drawing() { BeginDrawing(); }
void platform_end_drawing() { EndDrawing(); }

void platform_clear_background(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  Color c = {r, g, b, a};
  ClearBackground(c);
}

void platform_draw_rectangle(uint8_t r, uint8_t g, uint8_t b, uint8_t a, int x,
                             int y, int w, int h) {
  Color c = {r, g, b, a};
  DrawRectangle(x, y, w, h, c);
}

double platform_get_delta() { return GetFrameTime(); }

bool platform_key_down(enum Key k) {
  switch (k) {
  case PL_KEY_Q:
    return IsKeyDown(KEY_Q);
  case PL_KEY_W:
    return IsKeyDown(KEY_W);
  case PL_KEY_E:
    return IsKeyDown(KEY_E);
  case PL_KEY_R:
    return IsKeyDown(KEY_R);
  case PL_KEY_T:
    return IsKeyDown(KEY_T);
  case PL_KEY_Y:
    return IsKeyDown(KEY_Y);
  case PL_KEY_I:
    return IsKeyDown(KEY_I);
  case PL_KEY_O:
    return IsKeyDown(KEY_O);
  case PL_KEY_P:
    return IsKeyDown(KEY_P);
  case PL_KEY_LEFT_BRACKET:
    return IsKeyDown(KEY_LEFT_BRACKET);
  case PL_KEY_RIGHT_BRACKET:
    return IsKeyDown(KEY_RIGHT_BRACKET);
  case PL_KEY_A:
    return IsKeyDown(KEY_A);
  case PL_KEY_S:
    return IsKeyDown(KEY_S);
  case PL_KEY_D:
    return IsKeyDown(KEY_D);
  case PL_KEY_F:
    return IsKeyDown(KEY_F);
  case PL_KEY_K:
    return IsKeyDown(KEY_K);
  case PL_KEY_SEMI:
    return IsKeyDown(KEY_SEMICOLON);
  case PL_KEY_SINGLE_QUOTE:
    return IsKeyDown(KEY_APOSTROPHE);
  case PL_KEY_BACK_SLASH:
    return IsKeyDown(KEY_BACKSLASH);
  case PL_KEY_Z:
    return IsKeyDown(KEY_Z);
  case PL_KEY_X:
    return IsKeyDown(KEY_X);
  case PL_KEY_C:
    return IsKeyDown(KEY_C);
  case PL_KEY_B:
    return IsKeyDown(KEY_B);
  case PL_KEY_N:
    return IsKeyDown(KEY_N);
  case PL_KEY_COMMA:
    return IsKeyDown(KEY_COMMA);
  case PL_KEY_DOT:
    return IsKeyDown(KEY_PERIOD);
  case PL_KEY_SLASH:
    return IsKeyDown(KEY_SLASH);
  case PL_KEY_G:
    return IsKeyDown(KEY_G);
  case PL_KEY_H:
    return IsKeyDown(KEY_H);
  case PL_KEY_J:
    return IsKeyDown(KEY_J);
  case PL_KEY_L:
    return IsKeyDown(KEY_L);
  case PL_KEY_M:
    return IsKeyDown(KEY_M);
  case PL_KEY_U:
    return IsKeyDown(KEY_U);
  case PL_KEY_V:
    return IsKeyDown(KEY_V);
  }
}
