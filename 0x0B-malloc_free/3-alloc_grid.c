#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - returns a pointer to a 2D array of intergers
*alloc_grid - create a matrix using malloc
*@width: the grid's width
*@height: the grid's height
*return: 0 if width or height is 0 or negative and null on failure
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **) malloc(height * sizeof(int *));

		if (!ptr == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *) malloc(width * sizeof(int));
			if (ptr[i] == NULL)
			{
				for (j = 0; j <= i; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
			return (ptr);
		}
	}
	return (ptr);
}
