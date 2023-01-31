#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to the list_t
 * Return: Number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t node n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
