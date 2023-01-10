#include <stdio.h>
#include "main.h"
/**
*main - multiplies two numbers
*@argc: argument count
*@argv: argument vector
*
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multiplication *= atoi(argv[i]);
	}
	printf("%d\n", multiplication);
	return (0);
}
