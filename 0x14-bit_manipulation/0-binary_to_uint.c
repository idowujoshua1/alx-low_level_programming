#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
	return (0);
	for (size_t i = 0; b[i] != '\0'; ++i)
	{
	char digit = b[i];

	if (digit != '0' && digit != '1')
	return (0);

	result <<= 1;

	result += digit - '0';
	}
	return (result);
}
