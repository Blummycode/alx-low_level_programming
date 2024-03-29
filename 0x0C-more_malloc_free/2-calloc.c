#include "main.h"
#include <stdlib>
/**
*_calloc - allocates memory for an array, using malloc
*@nmeb: array elements
*@size: size of the array elements
*Return: void pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
