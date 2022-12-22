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
int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;
for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index};
return (dest);
}
