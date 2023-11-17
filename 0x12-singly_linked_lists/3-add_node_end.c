#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the `list_t` list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t last = *head;
	char *new_str;
	int len;

	while (str)
		len++;

	new_str = strdup(str);
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (*new_node);
}
