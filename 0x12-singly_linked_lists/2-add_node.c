#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the `list_t` list
 * @str: new str to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

