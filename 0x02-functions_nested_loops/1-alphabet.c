#include <stdio.h>
/**
 * printAlphabet - prints alphabet from a to z
 */
void printAlphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	}
	printAlphabet();
}
