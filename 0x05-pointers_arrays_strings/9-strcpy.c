#include "main.h"
/**
* char *_strcpy - copies a string 
* @dest: string destination
* @src: string origin
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
