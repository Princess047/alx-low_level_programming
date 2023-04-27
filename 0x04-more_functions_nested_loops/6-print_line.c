#include "main.h"

/**
 * print_line - Entry point
 * Description: draws a straight line through the terminal
 * @n: number of times line is printed
 * Return: Always 0.
 */

void print_line(int n)

{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
