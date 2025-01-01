#include "grid.h"
#include "iostream"
#include "raylib.h"

Grid::Grid()
{
    rowsCount = 11;
    columnsCount = 19;
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
            DrawRectangle(cellSize * column + 1, cellSize * row + 1, cellSize - 1, cellSize - 1, cellColor);
        }
    }
}

std::vector<Color> Grid::GetCellColors()
{
    return { BLACK, BLUE, RED, GREEN };
}
