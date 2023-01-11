#include "main.h"
/**
* create_array - creates an array of chars
* @size: array size
* @c: char to be assigned
* Return: pointer to the array, NULL if fails
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	str = malloc(sizeof(char) *size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
