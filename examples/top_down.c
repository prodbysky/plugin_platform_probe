#include "../platform/platform_def.h"

#define PLAYER_SPEED 0.05

typedef struct {
  float x, y, w, h;
} rectangle_t;

int main() {
  platform_init(900, 900, "Hello world!");

  rectangle_t player = {100, 100, 40, 40};

  while (!platform_should_close()) {
    if (platform_key_down(PL_KEY_W)) {
      player.y -= PLAYER_SPEED;
    }
    if (platform_key_down(PL_KEY_A)) {
      player.x -= PLAYER_SPEED;
    }
    if (platform_key_down(PL_KEY_S)) {
      player.y += PLAYER_SPEED;
    }
    if (platform_key_down(PL_KEY_D)) {
      player.x += PLAYER_SPEED;
    }

    platform_begin_drawing();
    platform_clear_background(17, 17, 17, 255);
    platform_draw_rectangle(255, 0, 0, 255, player.x, player.y, player.w,
                            player.h);
    platform_end_drawing();
  }
}
