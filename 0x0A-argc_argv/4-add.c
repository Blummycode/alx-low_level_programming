#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (success)
*/
int main (int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
			printf("ERROR\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%\n", add);
	return (0);
}
