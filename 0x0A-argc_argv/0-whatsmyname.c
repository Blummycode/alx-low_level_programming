#include <stdio.h>
#include "main.h"
/**
*main - program prints its name, followed by a new line
*@argc: number of arguments
*@argv: argument vector
*
*Return: Always 0 (sucess)
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
return (0);
}
