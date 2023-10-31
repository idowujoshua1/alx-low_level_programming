#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatenate string
* @ac: argument count
* @av: argument vector
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int i, n, r = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			i++;
	}
	i += ac;

	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
