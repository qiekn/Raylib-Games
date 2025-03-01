#include "ball.h"
#include "raylib.h"

Ball::Ball()
    : x(GetScreenWidth() / 2.0), y(GetScreenHeight() / 2.0), speed_x(5),
      speed_y(5), radius(15) {}

void Ball::Update() {
  x += speed_x;
  y += speed_y;

  const int screen_width = GetScreenWidth();
  const int screen_height = GetScreenHeight();

  if ((x + radius >= screen_width) || (x - radius <= 0)) {
    speed_x *= -1;
  }

  if ((y + radius >= screen_height) || (y - radius <= 0)) {
    speed_y *= -1;
  }
}

void Ball::Draw() const { DrawCircle(x, y, radius, WHITE); }
