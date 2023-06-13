#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Entry Point
 * desc:  reads a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t y;
	ssize_t w;
	ssize_t z;

	y = open(filename, O_RDONLY);
	if (y == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	z = read(y, x, letters);
	w = write(STDOUT_FILENO, x, z);

	free(x);
	close(y);
	return (w);
}

