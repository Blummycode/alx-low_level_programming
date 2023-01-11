#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - returns a pointer to a 2D array of intergers
*@width: the grid's width
*@height: the grid's height
*return: 0 if width or height is 0 or negative and null on failure
*/
int **alloc_grid(int width, int height)
{
	int i, j, h, w;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(int *));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (!ptr[i])
		{
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (h = 0; h < height; h++)
		{
			for (w = 0; w < width; w++)
			ptr[h][w] = 0;
		}
		return (ptr);
	}
}
