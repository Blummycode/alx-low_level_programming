#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
*add_node - adds a new node at the beginning of a list
*@head: double pointer to the lit_t
*@str: the string to be added to the node
*Return: New element adress, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[len])
		len++;
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
