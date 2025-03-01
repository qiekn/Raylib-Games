#include "raylib.h"
#include "clock.h"

const int screen_width = 800;
const int screen_height = 600;
Color LIGHT_BLUE = {225, 239, 240, 255};

const int clock_size = 200;
const Vector2 clock_pos = {screen_width / 2.0, screen_height / 2.0};

int main() {
  Clock clock(clock_size, clock_pos);

  InitWindow(screen_width, screen_height, "Clock");
  SetTargetFPS(15);

  while (!WindowShouldClose()) {
    clock.Update();

    BeginDrawing();
    ClearBackground(LIGHT_BLUE);
    clock.Draw();
    EndDrawing();
  }

  CloseWindow();
}
