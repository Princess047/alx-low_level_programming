#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Entry Point
 * Desc: a function that frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int y;
	listint_t *z;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			z = (*h)->next;
			free(*h);
			*h = z;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}
	*h = NULL;
	return (x);
}
