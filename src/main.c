#include "screens/screens.h"

int main(void)
{

  InitWindow(screenWidth, screenHeight, "Pong by Sami Amsaf");
  SetTargetFPS(60);

  GameScreen currentScreen = MAIN_MENU;

  while (!WindowShouldClose())
  {
    switch (currentScreen)
    {
    case MAIN_MENU:
    {
      render_menu();
      if (IsKeyPressed(KEY_SPACE))
      {
        currentScreen = GAME_SCREEN;
      }
    }
    break;
    case GAME_SCREEN:
      render_game();
      break;
    }
  }

  CloseWindow();

  return 0;
}
