#include "main.h"
/**
*_strcat - concatenates two strings
*@src: the string to be concatenated
*@dest: the string the concatenated string will be appended
*Return: Resulting string
*/
char *_strcat(char *dest, char *src)
{
int index = dest_len = 0;

while (dest[index++])
	dest_len++;
for (index = 0; src[index]; index++)
	dest[dest_len++] = src[index];
return (dest);
}	
