#include <iostream>
#include <raylib.h>
#include "grid.h"

int main() 
{
    constexpr int screenWidth = 190 * 3;
    constexpr int screenHeight = 110 * 3;
    
    InitWindow(screenWidth, screenHeight, "ABALONE");
    SetTargetFPS(60);

    Grid grid = Grid();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

            grid.Draw();

        EndDrawing();
    }
    
    CloseWindow();
}