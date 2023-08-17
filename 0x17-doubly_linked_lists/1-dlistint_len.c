#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer
 * Return: totalnumber of elements
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
