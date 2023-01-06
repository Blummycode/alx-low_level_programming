#include "main.h"
/**
*_sqrt_recursion - returns natural square root of a number
*@n: the number
*Return: square root of a number
*/
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
/**
*_sqrt - recursive square root
*@n: the number
*@i: iterator
*Return: number
*/
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
