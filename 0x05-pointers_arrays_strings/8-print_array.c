#include: "main.h"
/**
* print_array - prints elements of an array of intergers
* @a: array pointer
* @n: array element numbers
* Return: empty
*/
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; i++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
