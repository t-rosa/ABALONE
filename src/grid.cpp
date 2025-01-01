#include "grid.h"
#include "iostream"
#include "raylib.h"
#include "string"

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
            int radius = (cellSize / 2);

            float cellX = (float)cellSize * (float)column;
            float cellY = (float)cellSize * (float)row;
            Vector2 center = {cellX, cellY};

            if (row < 5)
            {
                center = {cellX - radius * (5 - row), cellY};
            }
            else if (row > 5)
            {
                center = {cellX + radius * (row - 5), cellY};
            }

            DrawCircle(center.x, center.y, radius, cellColor);
        }
    }
}

std::vector<Color> Grid::GetCellColors()
{
    return {BLACK, BLUE, RED, BLACK, WHITE};
}
