#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	int h = 0;

	while (str[h])
	{
		_putchar(str[h]);
		h++;
	}
		_putchar('\n');
}
