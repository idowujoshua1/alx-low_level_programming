#include <stdio.h>
#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	unsigned char *byte_pointer = (unsigned char *)&test_value;

	return ((*byte_pointer == 1) ? 1 : 0);
}
