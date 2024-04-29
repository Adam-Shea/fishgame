#include "raylib.h"

int main(void) {
  const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth, screenHeight, "fishgame");

  Camera2D camera = {0};
  camera.zoom = 1.0f;

  SetTargetFPS(60);            // Set our game to run at 60 frames-per-second
  while (!WindowShouldClose()) // Detect window close button or ESC key
  {
    BeginDrawing();
    ClearBackground(GRAY);
    BeginMode2D(camera);
    DrawCircle(10, 10, 10, RED);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}
