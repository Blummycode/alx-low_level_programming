#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list_t
 * Return: Number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
