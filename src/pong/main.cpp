#include "ball.h"
#include "raylib.h"

const int screen_width = 800;
const int screen_height = 600;

const Color DARK_GREEN = {20, 160, 133, 255};

int main() {
  InitWindow(screen_width, screen_height, "Pong");
  SetTargetFPS(144);

  Ball ball;

  while (!WindowShouldClose()) {
    ball.Update();

    BeginDrawing();

    ClearBackground(DARK_GREEN);
    ball.Draw();

    EndDrawing();
  }
  CloseWindow();

  return 0;
}
