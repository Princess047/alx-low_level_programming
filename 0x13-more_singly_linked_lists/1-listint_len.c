#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Entry Point
 * Desc: returns the number of elements in a linked listint_t list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	do{
		x++;
		h = h->next;
	}while (h);
	return (x);
}
