#include "lists.h"
/**
 * dlistint_len - returns number of elements in a  list
 * @h: pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer
 * @index: index
 *
 * Return: index of node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;
	size_t len = 0;

	len = dlistint_len(head);
	if (index >= len)
		return (NULL);
	x = 0;
	while (x < index)
	{
		head = head->next;
		x++;
	}
	return (head);
}
