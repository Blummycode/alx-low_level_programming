#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* create_array - creates an array of chars
* @size: array size
* @c: char to be assigned
* Return: pointer to the array, NULL if fails
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	int i, n;

	str = malloc(n * sizeof(char));
	if (n == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		str[i] = c;
	return (str);
}
