#include "../entity.h"
#include <raylib.h>
#include <raymath.h>
#include <stdlib.h>
#include "screens.h"

void render_game(void) {

  Player *left_player = (Player *)malloc(sizeof(Player));
  Player *right_player = (Player *)malloc(sizeof(Player));
  Ball *ball = (Ball *)malloc(sizeof(Player));

  prepareEntities(left_player, right_player, ball);
  // This  part handles user input, and ideally it should be separated into
  // its own thread in the future
  if (IsKeyDown(KEY_UP) && right_player->rect.y > 0) {
    right_player->rect.y -= playerSpeed;
  }

  if (IsKeyDown(KEY_DOWN) && right_player->rect.y < 900 - playerSize.y) {
    right_player->rect.y += playerSpeed;
  }

  if (IsKeyDown(KEY_W) && left_player->rect.y > 0) {
    left_player->rect.y -= playerSpeed;
  }

  if (IsKeyDown(KEY_S) && left_player->rect.y < 900 - playerSize.y) {
    left_player->rect.y += playerSpeed;
  }
  // ---------------------------------------------------------------------------------------------------

  ball->position = Vector2Add(ball->position, ball->velocity);

  if (ball->position.y > 900 - ballSize || ball->position.y < 0 + ballSize) {
    ball->velocity.y *= -1;
  }

  if (ball->position.x > 1600 - ballSize || ball->position.x < 0 + ballSize) {
    ball->velocity.x *= -1;
  }

  if (CheckCollisionCircleRec(ball->position, ball->radius,
                              left_player->rect) ||
      CheckCollisionCircleRec(ball->position, ball->radius,
                              right_player->rect)) {
    ball->velocity.x *= -1;
  }

  BeginDrawing();
  ClearBackground(BLACK);
  // DrawRectangleV(left_player->position, playerSize, WHITE);
  DrawRectangleRec(left_player->rect, WHITE);
  DrawRectangleRec(right_player->rect, WHITE);
  DrawCircleV(ball->position, ballSize, WHITE);
  EndDrawing();
}
