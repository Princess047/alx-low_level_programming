#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Entry Point
 * Desc: a function that frees a listint_t list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
