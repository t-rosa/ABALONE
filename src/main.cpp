#include <iostream>
#include <raylib.h>
#include "grid.h"

int main() 
{
    constexpr int screenWidth = 110 * 3;
    constexpr int screenHeight = 110 * 3;
    
    InitWindow(screenWidth, screenHeight, "ABALONE");
    SetTargetFPS(60);

    Grid grid = Grid();

// BAS
    grid.grid[9][1] = 1;
    grid.grid[9][2] = 1;
    grid.grid[9][3] = 1;
    grid.grid[9][4] = 1;
    grid.grid[9][5] = 1;

    grid.grid[8][1] = 1;
    grid.grid[8][2] = 1;
    grid.grid[8][3] = 1;
    grid.grid[8][4] = 1;
    grid.grid[8][5] = 1;
    grid.grid[8][6] = 1;

    grid.grid[7][1] = 4;
    grid.grid[7][2] = 4;
    grid.grid[7][3] = 1;
    grid.grid[7][4] = 1;
    grid.grid[7][5] = 1;
    grid.grid[7][6] = 4;
    grid.grid[7][7] = 4;

    grid.grid[6][1] = 4;
    grid.grid[6][2] = 4;
    grid.grid[6][3] = 4;
    grid.grid[6][4] = 4;
    grid.grid[6][5] = 4;
    grid.grid[6][6] = 4;
    grid.grid[6][7] = 4;
    grid.grid[6][8] = 4;

// MID
    grid.grid[5][1] = 4;
    grid.grid[5][2] = 4;
    grid.grid[5][3] = 4;
    grid.grid[5][4] = 4;
    grid.grid[5][5] = 4;
    grid.grid[5][6] = 4;
    grid.grid[5][7] = 4;
    grid.grid[5][8] = 4;
    grid.grid[5][9] = 4;

// HAUT
    grid.grid[1][9] = 2;
    grid.grid[1][8] = 2;
    grid.grid[1][7] = 2;
    grid.grid[1][6] = 2;
    grid.grid[1][5] = 2;

    grid.grid[2][9] = 2;
    grid.grid[2][8] = 2;
    grid.grid[2][7] = 2;
    grid.grid[2][6] = 2;
    grid.grid[2][5] = 2;
    grid.grid[2][4] = 2;

    grid.grid[3][9] = 4;
    grid.grid[3][8] = 4;
    grid.grid[3][7] = 2;
    grid.grid[3][6] = 2;
    grid.grid[3][5] = 2;
    grid.grid[3][4] = 4;
    grid.grid[3][3] = 4;

    grid.grid[4][2] = 4;
    grid.grid[4][3] = 4;
    grid.grid[4][4] = 4;
    grid.grid[4][5] = 4;
    grid.grid[4][6] = 4;
    grid.grid[4][7] = 4;
    grid.grid[4][8] = 4;
    grid.grid[4][9] = 4;

    grid.Print();


    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

            grid.Draw();
            

        EndDrawing();
    }
    
    CloseWindow();
}