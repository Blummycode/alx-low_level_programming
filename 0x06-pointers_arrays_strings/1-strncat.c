#include "main.h"
/**
* _strncat - concatenates two strings
* @src: the string to be concatenates
* @dest: the string the concatenated string will be appended
* @n: number of bytes to be appended to dest
* Return: the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat( dest, src, n);
	return (dest);
}
