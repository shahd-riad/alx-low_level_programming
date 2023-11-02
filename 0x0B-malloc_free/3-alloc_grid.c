#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional(width * height) array of integers
 * @width: width of array
 * @height: height of array
 * Each element of the grid should be initialized to 0
 *
 * Return: pointer to the created array
 * If width or height is 0 or negative, return NULL
 * The function should return NULL on failure
*/
int **alloc_grid(int width, int height)
{
    int i;
    int j;
    int **grid;

    if (width <= 0 || height <= 0)
        return (NULL);
    grid = (int**)malloc(sizeof(int*) * height);
    for (i = 0; i < height; i++)
        grid[i] = (int*)malloc(width * sizeof(int));
    for (i = 0; i <= height; i++)
    {
        for(j = 0; j <= width; j++)
        {
            grid[i][j] = 0;
        }
    }
    return (grid);
}
