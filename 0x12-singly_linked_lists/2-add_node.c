#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Entry Point
 * desc: a function that adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: new string to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ind;
	unsigned int length = 0;

	while (str[length])
		length++;
	ind = malloc(sizeof(list_t));
	if (!ind)
		return (NULL);
	ind->str = strdup(str);
	ind->len = length;
	ind->next = (*head);
	(*head) = ind;
	return (*head);
}
