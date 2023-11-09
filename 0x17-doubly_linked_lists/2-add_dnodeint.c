#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function to add a node at start
 * @head: list
 * @n: the element to be added
 * Return: a pointer to the new list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;

	if (!(*head))
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
