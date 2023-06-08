#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Entry Point
 * Desc: a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
