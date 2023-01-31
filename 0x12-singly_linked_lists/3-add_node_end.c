#include "lists.h"
/**
 * add_node_end - adds a new node at the end of list
 * @**head: double pointer to the list_t
 * @str: string to be added to the new node
 * Return: Adress of the new element, or null if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	current = *head;
	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (*head);
}
