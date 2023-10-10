#include "main.h"
/**
 * print_Alphabet - prints alphabet from a to z
 */
void print_Alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
