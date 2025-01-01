#include "grid.h"
#include "iostream"
#include "raylib.h"

Grid::Grid()
{
    rowsCount = 11;
    columnsCount = 11;
    cellSize = 30;
    Initialize();
    colors = GetCellColors();
}

void Grid::Initialize()
{
    for (int row = 0; row < rowsCount; row++)
    {
        for (int column = 0; column < columnsCount; column++)
        {
            grid[row][column] = 0;
        }
    }
}

void Grid::Print()
{
    for (int row = 0; row < rowsCount; row++)
    {
        for (int column = 0; column < columnsCount; column++)
        {
            std::cout << grid[row][column] << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::Draw()
{
    for (int row = 0; row < rowsCount; row++)
    {
        for (int column = 0; column < columnsCount; column++)
        {
            int cellValue = grid[row][column];
            Color cellColor = colors[cellValue];

            float cellX = (float)cellSize * (float)column;
            float cellY = (float)cellSize * (float)row;

            Vector2 center = {cellX, cellY};
            int sides = 6;
            int radius = cellSize / 2;
            int rotation = 90;

            DrawPoly(center, sides, radius, rotation, cellColor);
        }
    }
}

std::vector<Color> Grid::GetCellColors()
{
    return {BLACK, BLUE, RED, BLACK, WHITE};
}
