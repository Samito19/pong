#include <raylib.h>
#include "screens.h"

void render_menu(void)
{
  BeginDrawing();

  ClearBackground(BLACK);

  DrawText("Press the space key to start playing...", screenWidth / 2 - 400, screenHeight / 2, 40, RAYWHITE);

  EndDrawing();
}
