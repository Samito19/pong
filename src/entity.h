#ifndef PLAYER_H
#define PLAYER_H

#include <raylib.h>

typedef struct {
  Rectangle rect;
  Vector2 size;
  Color color;
} Player;

typedef struct {
  Vector2 position;
  float radius;
  Color color;
  Vector2 velocity;
} Ball;

static Vector2 playerSize = {(float)20, (float)300};
static float playerSpeed = 7.0;
static float ballSize = 20.0;

void prepareEntities(Player *, Player *, Ball *);

#endif // !PLAYER
