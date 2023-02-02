#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the listint_t linked list
 * @index: index of the node to return
 * Return: Pointer to the nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp?temp:NULL);
}
