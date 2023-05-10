#include "main.h"
/**
 * _strlen_recursion - Entry point
 * Description: a function that returns the length of a string
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lenstr = 0;

	if (*s)
	{
		lenstr++;
		lenstr += _strlen_recursion(s + 1);
	}

	return (lenstr);
}
