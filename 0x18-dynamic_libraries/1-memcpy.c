#include "main.h"
/**
*_memcpy - function that copies memory area
*@dest: pointer to the destination array where content will be copied
*@src: pointer to the source of data to be copied
*@n: number of bytes to be copied
*
*Return: copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
