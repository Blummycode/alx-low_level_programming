#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of a list
*@head: double pointer to first node 
*@n: data to insert in the new node
*Return: New element adress, or NULL if it fails
*/
list_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new_node;
	
	if (head == NULL)
		return (NUll);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
