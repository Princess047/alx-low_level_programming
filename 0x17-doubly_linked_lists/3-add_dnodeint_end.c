#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer
 * @n: n value of new node
 *
 * Return: address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t  *curr = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*head)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (curr->next != NULL)
		curr = curr->next;
	new->prev = curr;
	curr->next = new;
	return (new);
}
