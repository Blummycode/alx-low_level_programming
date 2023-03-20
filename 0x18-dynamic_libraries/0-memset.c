#include "main.h"
/**
*_memset - fills memory block with a specific value
*@s: Address of the memory to be filled
*@b: constant byte to fill the memory area
*@n: number of bytes to be filled
*
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
