#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: the index of the list
 * @n: int to add
 * index starts at 0
 * Return: the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
listint_t *current;
unsigned int count;

if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

current = *head;
count = 0;

while (current != NULL)
{
	if (count == idx - 1)
	{
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
	}
	count++;
	current = current->next;
}
free(new_node);
return (NULL);
}
