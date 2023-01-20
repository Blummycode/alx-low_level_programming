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
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		if (s == NULL)
			printf("%s", nil);
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(str);
}
