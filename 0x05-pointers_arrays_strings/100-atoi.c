#include "main.h"
/**
i* _atoi - converts a string to an interger
* @s: character string pointer
* Return: empty
*/
int _atoi(char *s)
{
	int num = 0;
	int i = 0;
	bool isNegative = false;

	if (s[i] == '-')
	{
		isNegative = true;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	if (isNegative) num = -1 * num;
	return (num);
}
