#include "lists.h"

/**
 * free_dlistint - a function to free a  list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
