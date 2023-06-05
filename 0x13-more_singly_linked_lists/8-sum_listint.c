#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Entry Point
 * Desc: returns the sum of all the data (n) of a listint_t linked list
 * @head: first node
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *x = head;

	while (x)
	{
		add += x->n;
		x = x->next;
	}
	return (add);
}
