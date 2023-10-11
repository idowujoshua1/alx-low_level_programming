#include "main.h"
/**
 * print_sign - prints the sign
 * @n: The number to be checked
 * Return: 1 for positive num, 0 for zero or -1 for negative num
 */
int print_sign(int n)

{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		num = 0;
		_putchar(48);
	}
	else if (n < 0)
	{
		num = -1;
		_putchar(45);
	}
	return (num);
}
