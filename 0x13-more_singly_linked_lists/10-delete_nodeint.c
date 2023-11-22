#include "lists.h"

/**
* delete_nodeint_at_index - Function that deletes the node at index
* of a listint_t linked list.
* @head: pointer
* @index: The index of the node that should be deleted.
*
* Return: 1 if it succeeded, or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *next_node;
unsigned int count = 0;

if (*head == NULL)
	return (-1);

if (index == 0)
{
	*head = current->next;
	free(current);
	return (1);
}

while (current != NULL && count < index - 1)
{
	current = current->next;
	count++;
}

if (current == NULL || current->next == NULL)
	return (-1);

next_node = current->next->next;
free(current->next);
current->next = next_node;

return (1);
}
