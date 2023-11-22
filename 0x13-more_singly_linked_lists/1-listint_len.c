#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != 0)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
