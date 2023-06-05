#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Entry Point
 * Desc: a function that prints all the elements of a listint_t list
 * @h: linked list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	do {
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	while (h);
		return (x);
}
