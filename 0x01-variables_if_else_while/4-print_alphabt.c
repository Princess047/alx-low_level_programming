#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 111)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
