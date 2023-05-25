#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Entry Point
* desc: a function that prints strings, followed by a new line
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strng;
	unsigned int x;

	va_start(strings, n);
	for (x = 0; x < n; x++)
	{
		strng = va_arg(strings, char *);
		if (strng == NULL)
			printf("(nil)");
		else
			printf("%s", strng);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
