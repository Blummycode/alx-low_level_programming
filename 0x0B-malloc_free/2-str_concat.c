#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*str_concat - concatenates two strings
*@s1: the first string
*@s2: the string to be appended 
*Return: pointer to the new string and null on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, j = 0, 
	int length1 = 0;
        int length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	s = malloc(sizeof(char) * (length1 + length2 + 1));
	if (s == NULL)
		return(NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (i < length1)
		{
			s[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (length1 + length2))
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	s[i] = '\0';
	return (s);
}
