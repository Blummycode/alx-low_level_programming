#include "main.h"
/**
 * print_line - draws straight line on terminal
 * @n: number of times char '_' should be printed
 * Return: straight line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
