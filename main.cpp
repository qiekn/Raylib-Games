#include <raylib.h>
#include <iostream>

const int screenWidth = 600;
const int screenHeight = 300;

int main(void) {
  std::cout << "game start!" << std::endl;

  InitWindow(screenWidth, screenHeight, "awsome window");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawText("Contrats! You created your first window!", 100, 100, 20, LIGHTGRAY);
    EndDrawing();
  }
  return 0;
}
