#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: prints a diagonal line
 * Return: Always 0.
 * @n: number of times a character should be printed
 */

void print_diagonal(int n)

{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
