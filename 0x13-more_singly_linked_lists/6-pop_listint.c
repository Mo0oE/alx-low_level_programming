#include "lists.h"

/**
 * pop_listint - fu
 * @head: in
 * Return: number
 */

int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *pop = *head;

	if (!head || !**head)
		return (0);
	*head = pop->next;
	tmp = pop->n;
	free(pop);
	return (n);
}
