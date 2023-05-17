#include "raylib.h"
#include "raymath.h"

int main(void) {
    InitWindow(800, 600, "Template-4.0.0");

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
