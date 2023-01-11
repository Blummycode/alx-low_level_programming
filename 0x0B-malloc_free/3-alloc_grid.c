#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*alloc_grid - returns a pointer to a 2D array of intergers
*@width: the grid's width
*@height: the grid's height
*return: 0 if width or height is 0 or negative and null on failure
*/
int **alloc_grid(int width, int height)
{
	int i, w, **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (w = 0; w < width; w++)
			ptr[i][w] = 0;
	return (ptr);
}
