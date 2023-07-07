#include <stdio.h>
#include "main.h"

/**
 * print_binary - Entry Point
 * Desc: a function that prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x;
	int y = 0;
	unsigned long int z = 1UL << 63;

	for (x = 0; x < 64; x++)
	{
		if ((n & z) == z)
		{
			_putchar('1');
			y++;
		}
		else if (y > 0)
		{
			_putchar('0');
		}
		z = z >> 1;
	}
	if (y == 0)
	{
		_putchar('0');
	}
}
