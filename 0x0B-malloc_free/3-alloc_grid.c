#include "main.h"
#include <stdlib.h>"
#include <stdio.h>
/**
*alloc_grid - returns a pointer to a 2D array of intergers
*@width: the grid's width
*@height: the grid's height
*return: 0 if width or height is 0 or negative and null on failure
*/
int **alloc_grid(int width, int height)
{
	int h, w, **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (h = 0; h < height; h++);
	{
		ptr[h} = (int *) malloc(width * sizeof(int));
		if (ptr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(ptr[h]);
			free(ptr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			ptr[h][w] = 0;
	return (ptr);
}
