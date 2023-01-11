#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_strdup - duplicate to a new memory allocation
*@str: duplicate string
*Return: pointer to a string
*/
char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (str == 0)
		return (NULL);
	i = 0;
	while (str[i]!= "\0")
		i++;
	dup = malloc(sizeof(char))* (i + 1);
	if (dup == 0)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
