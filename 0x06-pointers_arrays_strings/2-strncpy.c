#include "main.h"
#include <string.h>
/**
* _strncpy - function that copies a string
* @src: string to be copied
* @dest: destination the string will be copied to
* @n: string bytes
* Return: copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
