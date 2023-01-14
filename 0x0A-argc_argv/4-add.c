#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i, j;
        int sum = 0;

	if (argc < 1)
	{
		return (0);
	}
	if (!isdigit(argv[i][j]))
	{
		printf("ERROR\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
