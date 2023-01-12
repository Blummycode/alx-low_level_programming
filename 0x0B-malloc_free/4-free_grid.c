#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*free_grid - frees a 2 dimesional grid
*@grid: the 2d grid
*@height: the grid's height dimension
*Return: empty
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
