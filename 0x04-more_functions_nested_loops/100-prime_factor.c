#include "main.h"
#include <stdio.h>
/**
 * main - prime factors
 * Return: Always 0 (Success)
 *
 * @n: number
 * factor_prime - the function prints the number prime factors
 */
void factor_prime(long n)
{
	int x, y, count, z;

	for (x = n - 1; x > 0; x--)
	{
		count = 0;
		y = 1;
		while (y <= x)
		{
			if ((x % y == 0) && (x > 1))
				count++;
			y++;
		}
		if (count <= 2)
		{
			if (n % x == 0)
			{
				z = x;
				printf("%d ", z);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
