#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lower case
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	while (i++ < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		_putchar('\n');
		}
	}
}
