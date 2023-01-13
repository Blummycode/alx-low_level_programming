#include "main.h"
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: minimum interger value
*@max: maximum interger value
*Return: pointer of the newly created array
*/
int *array_range(int min, int max)
{
	int i, range;
	int *ptr;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	ptr = malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);
}
