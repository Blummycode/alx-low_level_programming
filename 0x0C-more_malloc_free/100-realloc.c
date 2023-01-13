#include "main.h"
#include <stdlib.h>
/**
*_relloc - reallocates a memory block using malloc and free
*@ptr: pointer to the allocated memory block
*@old_size: the old memory size
*@new_size: the new allocated memory size
*Return: Pointer to the new allocated memory, and null if failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;
	char *oldp = ptr;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		p = malloc(new_size);
		if (p == NULL)
			return (p);
		for (i = 0; i < old_size; i++)
			p[i] = *((char *)ptr + 1);
	free(ptr);
	}
	return (p);
}
