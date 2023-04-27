#include "main.h"

/**
  * print_square - Entry point
  * Description - 'a function that prints a sqaure'
  * @size: size of sqaure
  * Return: Always 0 (sucess);
  */

void print_square(int size)
{
	int a, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
			for (h = 2; h <= size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
