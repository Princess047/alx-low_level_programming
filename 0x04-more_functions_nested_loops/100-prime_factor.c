#include <stdio.h>
#include <math.h>

/**
  * main - Entry point
  * Description - 'printing largest prime factor of 612852475143'
  * Return: Always 0 (sucess)
  */

int main(void)
{
	unsigned long int h, n = 612852475143;

	for (h = 3; h < 782849; h = h + 2)
	{
		while ((n % h == 0) && (n != h))
			n = n / h;
	}
	printf("%lu\n", n);
	return (0);
}
