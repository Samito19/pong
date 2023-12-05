#include <raylib.h>

void render_menu(void) {
  BeginDrawing();

  ClearBackground(RAYWHITE);

  DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

  EndDrawing();
}
