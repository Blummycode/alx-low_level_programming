#include "main.h"
/**
* _strcpy - copies the string
* @dest: string destination
* @src: string source
* Return: empty
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
