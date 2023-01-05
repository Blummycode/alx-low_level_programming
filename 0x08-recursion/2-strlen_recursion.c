#include "main.h"
/**
*_strlen_recursion - returns string length
*@s: pointer to string parameter
*Return: String length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
s++;
return (1 + _strlen_recursion(s));
}
