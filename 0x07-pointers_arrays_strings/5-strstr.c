#include "main.h"
#include <string.h>
/**
*_strstr - locates a substring
*@haystack: pointer to the string to be scanned
*@needle: substring to be searched in the string
*
*Return: Always 0(success)
*/
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);
	return (0);
}
