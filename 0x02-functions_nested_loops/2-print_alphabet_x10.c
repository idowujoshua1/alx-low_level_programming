#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 97; i < 10; i++)
	{
		while (i <= 122)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
