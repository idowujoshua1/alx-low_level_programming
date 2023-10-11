#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 97;

	for (i = 0; i < 10; i++)
	{
		while (j <= 122)
		{
			_putchar(j + 0);
			j++;
		}
		j = 97;
		_putchar('\n');
	}
}
