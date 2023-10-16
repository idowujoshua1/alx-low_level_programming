#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: the used string reference
 * Return: 0
 */
void puts2(char *str)
{
	int z = 0;

	int _putchar(char);

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
