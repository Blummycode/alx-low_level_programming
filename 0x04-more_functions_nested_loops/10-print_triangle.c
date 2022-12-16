#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: triangle size
 * Return: empty
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y > 0; y--)
			{
				if (y <= x)
					_putchar(35);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
