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
	unsigned int size;
	unsigned int i;

	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;
	char *s = malloc(size, sizeof(char))
	for (int i = 0; i < s1_length; i++0)
	{
		s[i] =  s1[i];
	}	
	for (int i = 0; i <s2_length; i++)
	{
		s(s1_length + i) = s2[i];
	}
	s(size - 1) = '\0';
	return (s);
}
