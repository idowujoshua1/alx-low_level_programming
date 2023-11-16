#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
size_t node;
node = 0;
while (h != NULL)
{
h = h->next;
node++;
}
return (node);
}
