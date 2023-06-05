#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - Entry Point
 * Desc: a function that reverses a listint_t linked list
 * @head: pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = next;
	}
	*head = reverse;
	return (*head);
}
