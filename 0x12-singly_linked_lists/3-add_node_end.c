#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer
 * @str: string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *ptr;
size_t length;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
for (length = 0; str[length]; length++)
;
new_node->len = length;
new_node->next = NULL;
ptr = *head;
if (ptr == NULL)
{
*head = new_node;
}
else
{
while (ptr->next != NULL)
ptr = ptr->next;
ptr->next = new_node;
}
return (*head);
}
