#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Entry Point
 * Desc:function that adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: data
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);
	x->n = n;
	x->next = NULL;
	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	while (y->next)
		y = y->next;
	y->next = x;
	return (x);
}
