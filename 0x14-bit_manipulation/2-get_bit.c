#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index
 * @n: the bit
 * @index: index of the bit
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int Value;

	if (index > 63)
		return (-1);

	Value = (n >> index) & 1;

	return (Value);
}

