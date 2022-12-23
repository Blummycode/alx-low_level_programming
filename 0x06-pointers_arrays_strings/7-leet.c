#include "main.h"
/**
* leet - function that encodes a string
* @m: input
* Return: returns encoded string
*/
char *leet(char *m)
{
	int index1 = i, x;
	char s1[] = "aAeEoOtTLl";
	char s2[] = "4433007711";
	
	for (i = 0; m[i] != '\0'; i++)
	{
			for (x = 0; x < 10; x++)
			{
				if (m[i] == s1[x])
				{
					m[i] = s2[j];
				}
			}
	}
	return (m);
}
