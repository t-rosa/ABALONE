#include <iostream>
#include <raylib.h>
#include "grid.h"

int main() 
{
    constexpr int screenWidth = 190 * 3;
    constexpr int screenHeight = 110 * 3;
    
    InitWindow(screenWidth, screenHeight, "ABALONE");
    SetTargetFPS(60);

    // Commencer la partie
    // Est-ce qu'un des deux joueur à gagné ?
    // Oui
    //  => FIN
    // Non
    //  => Est-ce que c'est le premier tour ?
    // Oui
    //  => Noir joue
    // Non
    //  => Si noir a joué blanc joue
    //      => 
    //  => Sinon noir joue
    // 

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