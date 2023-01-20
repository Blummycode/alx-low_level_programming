#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all - prints anything
*@format: list of types of arguments passed to the function
*@...: variable number of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *s, *separator;

	va_start(args, format);


