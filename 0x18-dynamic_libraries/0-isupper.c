#include "main.h"

/**
 * _isupper - Entry point
 * @c: char to check
 * Description - 'checking if c is uppercase or not'
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
