#include "main.h"
/**
 * _islower - function checks for a lowercase letter
 *@c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
