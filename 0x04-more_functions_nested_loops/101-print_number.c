#include "main.h"
#include <stdio.h>

/**
  * print_number - Entry point
  * Description - a function that prints an integer
  * @n: The integer to print
  * Return: Always 0 (sucess)
  */

void print_number(int n)
{
	unsigned int h = n;

	if (n < 0)
	{
		n *= -1;
		h = n;
		_putchar('-');
	}
	h /= 10;
	if (h != 0)
	{
		print_number(h);
	}
	_putchar((unsigned int) n % 10 + '0');
}
