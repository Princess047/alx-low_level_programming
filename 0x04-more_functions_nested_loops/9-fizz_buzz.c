#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * Return: Always 0 (sucess)
  */

int main(void)
{
	int h;

	for (h = 1; h <= 100; h++)
	{
		if ((h % 3 == 0) && (h % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (h % 3 == 0)
		{
			printf("Fizz");
		}
		else if (h % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", h);
		}
		if (h != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
