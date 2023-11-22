#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: pointer
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
		listint_t *newNode;

		while (current != NULL)
		{
			newNode = current->next;
			free(current);
			current = newNode;
		}
		*head = NULL;
}
