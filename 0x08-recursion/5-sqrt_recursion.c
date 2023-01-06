#include "main.h"
/**
*_sqrt_recursion - returns natural square root of a number
*@n: the number
@root: square root number to be found
@num: natural number
*Return: square root of a number
*/
int num(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * num(n + 1, root));
}
/**
*_sqrt_recursion: recursive square root
*@n: the number
*Return: resulting square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (num(1, n));
}
