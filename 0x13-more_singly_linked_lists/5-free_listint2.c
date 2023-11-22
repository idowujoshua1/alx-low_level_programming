#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: pointer
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *newNode;
	listint_t *current;

		if (head != NULL)
		{
			current = *head;
		while (current != NULL)
		{
			newNode = current;
			current = current->next;
			free(newNode);
		}
		*head = NULL;
		}
}
