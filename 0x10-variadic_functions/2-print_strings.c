#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - prints strings followed by a new line
*@separator: the string to be printed between the strings
*@n: number of strings passed to the function
*@...: variable number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		if (str == NULL)
			printf("%s", nil);
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(string);
}
