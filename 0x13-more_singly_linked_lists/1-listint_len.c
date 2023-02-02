#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to the the listint_t
 * Return: the length of listint_t
 */
size_t listint_len(const listint_t *h);
{
	size_t n = 0;

	while (h)
	{
		h =  h->next;
		n++;
	}
	return (n);
}
