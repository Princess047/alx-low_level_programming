#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Entry Point
 * Desc: a function that deletes the node at index of a linked list
 * @head: pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *y = *head;
	listint_t *c = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(y);
		return (1);
	}
	while (x < index - 1)
	{
		if (!y || !(y->next))
			return (-1);
		y = y->next;
		x++;
	}
	c = y->next;
	y->next = c->next;
	free(c);
	return (1);
}
