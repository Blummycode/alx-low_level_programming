#include "main.h"
/**
*_strstr - locates a substring
*@haystack: pointer to the string to be scanned
*@needle: substring to be searched in the string
*
*Return: Always 0(success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
