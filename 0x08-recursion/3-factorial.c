#include "main.h"

/**
* factorial - print factorial of a number
* @i: integer
* Return: factorial (success)
*/
int factorial(int i)
{
	if (i < 0)
	{
		return (-1);
	}
	else if (i == 0)
	{
		return (1);
	}
	else
	{
		return (i * factorial(i - 1));
	}
}
