#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Entry point
 * description: function that concatenates all the arguments
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int x, y, z = 0, m = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			m++;
	}
	m += ac;
	str = malloc(sizeof(char) * m + 1);

	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}
	return (str);
}
