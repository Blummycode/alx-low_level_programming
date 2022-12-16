#include "main.h"
/**
 * print_square - prints a square
 * @size: square size
 * return: empty
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
