#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of argument to sum
* Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count, result = 0;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		result += va_arg(args, int);
	}

	va_end(args);
	return (result);
}
