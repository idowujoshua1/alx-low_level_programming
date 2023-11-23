#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number.
 * @n: the number represented
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;

	while (shift >= 0)
	{
		putchar((n & (1UL << shift)) ? '1' : '0');
		shift--;
	}

	printf("\n");
}
