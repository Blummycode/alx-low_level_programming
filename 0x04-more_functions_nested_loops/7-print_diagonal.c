#include "main.h"
/**
 * print_diagonal - draws diagonal line on terminal
 * @n: number of time to print diagonal lines
 * Return: empty
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar (' ');
			}
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
