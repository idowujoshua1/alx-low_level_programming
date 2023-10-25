#include "main.h"

/**
* _print_rev_recursion - print sring in reverse
* @c: argument
*/
void _print_rev_recursion(char *c)
{
	if (*c == '\0')
	{
		return;
	}
	_print_rev_recursion(c + 1);
	_putchar(*c);
}
