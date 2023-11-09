#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - fu
 * @h: list
 * @idx: the index
 * @n: the value
 * Return: pointer
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));


	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
			return (NULL);
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;

	return (new);
}
