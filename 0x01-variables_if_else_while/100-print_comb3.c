#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j && i < j)
		{
			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}

		}
	}
	putchar('\n');
	return (0);
}
