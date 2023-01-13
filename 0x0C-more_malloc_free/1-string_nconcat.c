#include "main.h"
#include <stdlib.h>
/**
*_strlen - determines the string length
*@str: string whose length is to be determined
*@Return: string length
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
*string_nconcat - concatenates two strings
*@s1: first string
*@s2: string to be appended
*@n: the bytes to concat from string 2
*Return: pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, k;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (S2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= strlen(s2)
		num = strlen(s2);
	len = strlen(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
