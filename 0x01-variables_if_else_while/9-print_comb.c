#include <stdio.h>
/**
 * main - main prints combination of single digit numbers
 *
 *Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	
		putchar(n + '0');
		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
