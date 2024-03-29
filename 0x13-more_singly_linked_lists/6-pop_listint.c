#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to listint_t
 * Return: Head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
