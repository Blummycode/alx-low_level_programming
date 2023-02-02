#include "lists.h"
/**
 * sum_listint - function that returns sum of all the data(n) of a linked list
 * @head: pointer to listint_t
 * Return: Resulting sum, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
