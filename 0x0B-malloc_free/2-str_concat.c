#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*get_str_len - gets a string length
*@str: string whose length is to be found
*Return: returns interger value of the string
*/
int get_str_len(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	return (i + 1);
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
	int s1_size, s2_size, i, j;

	s1_size = get_str_len(s1);
	s2_size = get_str_len(s2);
	s = (char *) malloc(((sizeof(char) * (s1_size + s2_size - 1));
	if (s == NULL)
		return(NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
