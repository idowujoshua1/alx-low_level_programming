#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
		listint_t *nextNode;

		while (current != NULL)
		{
			nextNode = current->next;
			free(current);
			current = nextNode;
		}
}
