#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory where it is to be stored
 *@src: memory to be copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int b = n;

	for (; x < b; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
