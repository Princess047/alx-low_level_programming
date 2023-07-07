#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Entry Point
 * Desc: a function that creates a file
 * @filename: pointer
 * @text_content: pointer
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, w, y = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (y = 0; text_content[y];)
			y++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(x, text_content, y);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
