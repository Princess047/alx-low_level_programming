#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Entry Point
 * Desc: function that inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: data
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *node;
	listint_t *y = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (x = 0; y && x < idx; x++)
	{
		if (x == idx - 1)
		{
			node->next = y->next;
			y->next = node;
			return (node);
		}
		else
			y = y->next;
	}

	return (NULL);
}
