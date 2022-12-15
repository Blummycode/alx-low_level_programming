#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of an int
 * @n:the int last digit result
 * Return:value of the last digit 
 */
int print_last_digit(int n)
{	int i;
	i = n % 10;
	if (n < 0)
	{
		i = (-1 * i);
	}
	_putchar(i + '0');
	return (i);
}
