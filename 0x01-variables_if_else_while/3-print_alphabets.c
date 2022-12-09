#include <stdio.h>

/**
 * main - main prints lower and upper case alphabet
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c = 'a';
	int C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
