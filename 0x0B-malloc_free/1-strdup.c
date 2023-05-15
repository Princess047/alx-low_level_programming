#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry point
 * description: function to duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{
	char *xxx;
	int b, a = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;
	xxx = malloc(sizeof(char) * (b + 1));
	if (xxx == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		xxx[a] = str[a];
	return (xxx);
}
