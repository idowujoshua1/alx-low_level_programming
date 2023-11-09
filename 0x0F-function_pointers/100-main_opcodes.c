#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints the opcodes of its own main function.
 * @argc: Argument count
 * @argv: Argument of number of bytes to print
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *add;
	int count, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	add = (char *)&main;
	bytes = atoi(argv[1]);
	count = 0;

	while (count < bytes - 1)
	{
		printf("%02hhx ", add[count]);
		count++;
	}

	printf("%02hhx\n", add[count]);
	return (0);
}
