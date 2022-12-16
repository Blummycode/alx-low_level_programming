#include "main.h"
/**
 * print_line - draws straight line on terminal
 * @n: number of times char '_' should be printed
 * Return: empty
 */
void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
