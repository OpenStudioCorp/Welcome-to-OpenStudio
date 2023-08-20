#include <raylib.h>

int main(void) {
    InitWindow(500, 100, "Welcome to OpenStudio!");

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawText("Welcome to OpenStudio :)", (100 - 50) / 2, (100 - 50) / 2, 35, WHITE);
        EndDrawing();
    }

    CloseWindow();
}