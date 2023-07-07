#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Entry Point
 * desc: a function that appends text at the end of a file
 * @filename: pointer
 * @text_content: String
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, w, y = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[y])
		{
			y++;
		}
	}
	x = open(filename, O_WRONLY | O_APPEND);
	w = write(x, text_content, y);
	if (x == -1 || w == -1)
		return (-1);
	close(x);
	return (1);
}
