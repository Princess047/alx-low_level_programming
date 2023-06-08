#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Entry Point
 * Desc: returns bits you would need to flip to get from one number to another
 * @n: pointer
 * @n: first number
 * @m: second number
 *
 * Return: 1 for success, -1 for failure
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, a = 0;
	unsigned long int y;
	unsigned long int z = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		y = z >> x;
		if (y & 1)
			a++;
	}
	return (a);
}
