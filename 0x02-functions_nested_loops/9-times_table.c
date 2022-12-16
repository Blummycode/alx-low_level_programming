#include "main.h"
/**
 * times_table - prints the 9 timetable starting with 0
 */
void times_table(void);
{
	int rows, columns, d;

	for (rows = 0; rows <= 9; rows++)
	{
		_putchar('0');
		for (columns = 0; columns <= 9; columns++)
		{
			_putchar(',');
			_putchar(' ');
			d = rows * columns;
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
