#pragma once

#include "vector"
#include "raylib.h"

class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid[19][11];

private:
    std::vector<Color> GetCellColors();
    int rowsCount;
    int columnsCount;
    int cellSize;
    std::vector<Color> colors;
};