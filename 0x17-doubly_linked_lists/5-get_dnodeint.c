#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - fu
 * @head: list
 * @index: the index to be modified
 * Return: pointer to the new list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *current = head;

	if (!head)
		return (NULL);

	while (current)
	{
		if (n == index)
			return (current);
		current = current->next;
		n++;
	}
	return (NULL);
}
