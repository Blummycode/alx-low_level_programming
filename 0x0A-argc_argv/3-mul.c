#include <stdio.h>
#include <stdlib.h>
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
	int i, multiplication = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
		multiplication *= atoi(argv[i]);
		}
	printf("%d\n", multiplication);
	}
	return (0);
}
