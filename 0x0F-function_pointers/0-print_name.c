#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @n: name
 * @f: function_pointers
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
