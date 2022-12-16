#include "main.h"
/**
 * times_table - prints the 9 timetable starting with 0
 */
void times_table(void);
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		for (c = 0; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');
			d = r * c;
			if (d <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((d / 10 + '0');
			}
			_putchar ((d % 10) + '0');
		}
		_putchar('\n');
	}
}
