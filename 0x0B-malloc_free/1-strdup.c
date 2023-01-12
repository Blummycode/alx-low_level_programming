#include "main.h"
#include <stdlib.h>
/**
*_strdup - duplicate to a new memory allocation
*@str: duplicate string
*Return: pointer to a string
*/
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size, i;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	ptr = (char *) malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
