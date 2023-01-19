#include "function_pointers.h"
/**
*int_index - searches for an interger
*@array: the collection of elements
*@size: number of elements in the array
*@cmp: pointer to the function
*Return: Index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		return (-1);
