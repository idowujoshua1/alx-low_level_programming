#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints elements of list_t list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t c = 0;
while (h != NULL)
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
c++;
h = h->next;
}
return (c);
}
