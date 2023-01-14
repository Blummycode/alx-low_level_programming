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
int main(int argc, char *argv[])
{
	int i;
        int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			char *str;

			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] < 48 || str[j] > 57)
				{
					printf("ERROR\n");
					return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%\n", add);
		return (0);
}
