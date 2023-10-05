#include <stdio.h>
/**
 * main - containing functions
 * Return: 0 if no error
 */
int main(void)
{
	printf("Size of Char: %zu bytes\n", sizeof(char));
	printf("Size of short: %zu bytes\n", sizeof(short));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu\n", sizeof(double));
	printf("Size of long double: %zu\n", sizeof(long double));
	return (0);
}