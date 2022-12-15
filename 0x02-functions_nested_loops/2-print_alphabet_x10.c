#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lower case
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i++ < 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		_putchar('\n');
		}
	}
}
