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
            int sides = 6;
            int radius = cellSize / 2;
            int rotation = 90;

            float cellX = (float)cellSize * (float)column;
            float cellY = (float)cellSize * (float)row;
            Vector2 center = {cellX, cellY};

            switch (row)
            {
            case 1:
                center = {cellX - radius * 4, cellY};
                break;
            case 2:
                center = {cellX - radius * 3, cellY};
                break;
            case 3:
                center = {cellX - radius * 2, cellY};
                break;
            case 4:
                center = {cellX - radius, cellY};
                break;
            case 6:
                center = {cellX + radius, cellY};
                break;
            case 7:
                center = {cellX + radius * 2, cellY};
                break;
            case 8:
                center = {cellX + radius * 3, cellY};
                break;
            case 9:
                center = {cellX + radius * 4, cellY};
                break;
            default:
                break;
            }

            DrawPoly(center, sides, radius, rotation, cellColor);
        }
    }
}

std::vector<Color> Grid::GetCellColors()
{
    return {BLACK, BLUE, RED, BLACK, WHITE};
}
