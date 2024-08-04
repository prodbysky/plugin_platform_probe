#pragma once
#include <stdbool.h>
#include <stdint.h>

enum Key {
  PL_KEY_Q = 'q',
  PL_KEY_W = 'w',
  PL_KEY_E = 'e',
  PL_KEY_R = 'r',
  PL_KEY_T = 't',
  PL_KEY_Y = 'y',
  PL_KEY_U = 'u',
  PL_KEY_I = 'i',
  PL_KEY_O = 'o',
  PL_KEY_P = 'p',
  PL_KEY_LEFT_BRACKET = '[',
  PL_KEY_RIGHT_BRACKET = ']',

  PL_KEY_A = 'a',
  PL_KEY_S = 's',
  PL_KEY_D = 'd',
  PL_KEY_F = 'f',
  PL_KEY_G = 'g',
  PL_KEY_H = 'h',
  PL_KEY_J = 'j',
  PL_KEY_K = 'k',
  PL_KEY_L = 'l',
  PL_KEY_SEMI = ';',
  PL_KEY_SINGLE_QUOTE = '\'',
  PL_KEY_BACK_SLASH = '\\',

  PL_KEY_Z = 'z',
  PL_KEY_X = 'x',
  PL_KEY_C = 'c',
  PL_KEY_V = 'v',
  PL_KEY_B = 'b',
  PL_KEY_N = 'n',
  PL_KEY_M = 'm',
  PL_KEY_COMMA = ',',
  PL_KEY_DOT = '.',
  PL_KEY_SLASH = '/',
};

void platform_init(int w, int h, const char *title);
bool platform_should_close();
void platform_begin_drawing();
void platform_end_drawing();
void platform_clear_background(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
void platform_draw_rectangle(uint8_t r, uint8_t g, uint8_t b, uint8_t a, int x,
                             int y, int w, int h);
bool platform_key_down(enum Key k);

double platform_get_delta();
