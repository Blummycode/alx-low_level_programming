#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a specified index.
 * @n: pointer to the bit
 * @index: index of the bit.
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
