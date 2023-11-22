#include "lists.h"

/**
 * *add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: A pointer to the listint_t list
 * @n: number to add to the list
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
