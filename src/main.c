#include "game_params.h"
#include "screens/screens.h"
#include <raylib.h>

int main(void) {

  InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
  SetTargetFPS(60);

  GameScreen currentScreen = MAIN_MENU;

  while (!WindowShouldClose()) {
    switch (currentScreen) {
    case MAIN_MENU:
      render_menu();
      break;
    case GAME_SCREEN:
      render_game();
      break;
    }
  }

  CloseWindow();

  return 0;
}
