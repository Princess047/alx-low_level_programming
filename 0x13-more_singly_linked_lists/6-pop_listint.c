#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Entry Point
 * Desc: a function that deletes the head node of a linked list
 * @head: pointer
 *
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *y;
	int x;

	if (!head || !*head)
		return (0);
	x = (*head)->n;
	y = (*head)->next;
	free(*head);
	*head = y;
	return (x);
}
