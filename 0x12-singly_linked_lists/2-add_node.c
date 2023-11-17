#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: start of the link
* @str: string to duplicate
* Return: new address
*/
list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	new_node->str = ptr;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
