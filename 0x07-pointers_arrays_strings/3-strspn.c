#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: pointer to the string to be searched
*@accept: prefix measured
*
*Return: new string
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, n;

	for (n = 0; *(s + n); n++)
	{
		for (i =0; *(accept + i); i++)
		{
			if (*(s + n) == *(accept +i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
