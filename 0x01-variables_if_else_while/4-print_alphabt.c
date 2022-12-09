#include <stdio.h>

/**
 * main - main prints alphabet
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
		}
		 	c++;
	}
	putchar('\n');
	return (0);
}
