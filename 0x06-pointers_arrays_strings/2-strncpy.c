#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: destination of string pointer
 * @src: source of string pointer
 * @n: number of bytes to be used
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int c_of_b;

for (c_of_b = 0; c_of_b < n && src[c_of_b] != '\0'; c_of_b++)
dest[c_of_b] = src[c_of_b];

for (; c_of_b < n; c_of_b++)
	dest[c_of_b] = '\0';

return (dest);
}
