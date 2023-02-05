#include "lists.h"
/**
 * free_listint - frees list
 * @head: pointer to listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		free(head);
		head = temp;
	}
}
