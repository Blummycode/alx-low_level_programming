#include "main.h"
#include <stdlib.h>
/**
*_strdup - duplicate to a new memory allocation
*@str: duplicate string
*Return: pointer to a string
*/
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len = 0; 
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	nstr = malloc(sizeof(char) * (len + 1));
	if (nstr == NULL)
		return (NULL);
	while (nstr[i] = str[i] !='\0')
		i++;
	return (nstr);
}
