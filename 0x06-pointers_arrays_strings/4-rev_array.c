#include "main.h"
/**
* reverse_array - reverses the content of an array of intergers
* @a: array of intergers to be reversed
* @n: number of elements in the array
* return: empty
*/
void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index > n / 2; index--)
{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
}
}
