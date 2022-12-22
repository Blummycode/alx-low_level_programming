#include "main.h"
/**
* string_toupper - changes all lowercase letters to uppercase
* @y: string parameter
* Return: Returns changed string
*/
char *string_toupper(char *y)
{
	int i = 0;

	while (y[i])
	{
		if (y[i] >= 97 && y[i] <= 122)
			x[i] = y[i] - 32;
		i++;
	}
	return (y);
}
