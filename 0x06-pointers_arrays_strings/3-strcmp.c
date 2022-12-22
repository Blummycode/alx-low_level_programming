#include "main.h"
#include <string.h>
/**
* _strcmp - function for comparing two strings
* @s1: pointer for first string to be compared
* @s2: pointer for second string to be compared
* return: 0 if s1 == s2
* result: value after string comparison
*/
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
