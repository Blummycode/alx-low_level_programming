#include "main.h"
/**
* swap_int - swaps the values of two intergers
* @a: first interger to be swapped
* @b: second interger to be swapped
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
