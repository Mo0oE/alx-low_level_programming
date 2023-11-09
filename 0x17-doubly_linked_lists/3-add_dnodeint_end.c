#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - fu
 * @head: the list
 * @n: the node value
 * Return: pointer to the new list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (new ? free(new), NULL : NULL);

	if (!*head)
	{
		*head = new;
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		return (new);
	}

	while (current->next)
		current = current->next;

	current->next = new;
	new->prev = current;
	new->next = NULL;
	new->n = n;

	return (*head);
}
