#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*malloc_checked - allocates memory using malloc
*@b: memory to be allocated
*Return: Pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
