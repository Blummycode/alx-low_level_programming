#include "main.h"
/**
* string_toupper - changes all lowercase letters to uppercase
* @str: parameter to be changed
* Return: Returns changed character
*/
char *string_toupper(char *)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
