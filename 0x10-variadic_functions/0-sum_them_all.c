#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - function that returns the sum of all its parameters
*@n: the number of parameters
*@...: variable number of parameters
*@Return: Sum of parameters or 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	sum = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
