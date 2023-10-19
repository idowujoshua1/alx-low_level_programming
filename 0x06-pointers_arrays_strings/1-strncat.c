#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source of pointer.
 * @n: number of bytes to be cocantenated
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int _l, z;

	_l = 0;
	while (dest[_l] != '\0')
	{
		_l++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, _l++)
	{
		dest[_l] = src[z];
	}
	dest[_l] = '\0';
	return (dest);
}
