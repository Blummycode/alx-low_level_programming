#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*_strlen - gets a string length
*@str: string whose length is to be found
*Return: returns interger value of the string
*/
int _strlen(char *str)
{
	unsigned  int i;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
*str_concat - concatenates two strings
*@s1: the first string
*@s2: the string to be appended 
*Return: pointer to the new string and null on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int size, i, j;

	size = (strlen(s1) + strlen(s2) + 1);
	s = (char *) malloc(sizeof(char) * size);
	if (s == NULL)
		return(NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(s + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(s + i) = *(s2 + j);
		i++;
	}
	return (s);
}
