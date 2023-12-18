#include "entity.h"
#include "game_params.h"
#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

void prepareEntities(Player *player1, Player *player2, Ball *ball)
{
  player1->size = playerSize;
  Vector2 player1Pos =
      (Vector2){(float)20, (float)screenHeight / 2 - (playerSize.y / 2)};
  player1->rect = (Rectangle){player1Pos.x, player1Pos.y, playerSize.x, playerSize.y};

  player2->size = playerSize;

  Vector2 player2Pos = (Vector2){(float)screenWidth - 40,
                                 (float)screenHeight / 2 - (playerSize.y / 2)};
  player2->rect = (Rectangle){player2Pos.x, player2Pos.y, playerSize.x, playerSize.y};

  ball->position = (Vector2){(float)screenWidth / 2, (float)screenHeight / 2};
  ball->velocity = (Vector2){5.0f, 5.0f};
}
