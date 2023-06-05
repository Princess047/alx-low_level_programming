#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * looped_listint_len - function that counts the number of unique nodes
 * @head: pointer
 *
 * Return:  the number of nodes in the list,0 if otherwise
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	x = head->next;
	y = (head->next)->next;
	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				n++;
				x = x->next;
				y = y->next;
			}
			x = x->next;
			while (x != y)
			{
				n++;
				x = x->next;
			}
			return (n);
		}
		x = x->next;
		y = (y->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t list safely
 * @head: Pointer
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, x = 0;

	n = looped_listint_len(head);
	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
