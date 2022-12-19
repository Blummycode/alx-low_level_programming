#include "main.h"
/**
* print_rev - prints string in reverse
* @s: string input
* Return: empty
*/
void print_rev(char *s)
{
	int longj = 0;
	int k;
	
	while (*s != '\0')
	{
		longj++;
		s++;
	}
	s--;
	for (k = longj; k > 0; k--)
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
