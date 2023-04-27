#include "main.h"

/**
  * print_triangle - Entry point
  * Description -  printing out a triangle
  * @size: size of triangle
  * Return: Always 0 (sucess)
  */

void print_triangle(int size)
{
	int a, s, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (s = size - a; s > 1; s--)
			{
				_putchar(' ');
			}
			for (m = 0; m <= a; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
