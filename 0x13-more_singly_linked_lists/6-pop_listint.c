#include "lists.h"

/**
 * pop_listint - fu
 * @head: in
 * Return: number
 */

int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *pop;

	if (!head || !*head)
		return (0);
	pop = (*head)->next;
	tmp = (*head)->n;
	free(*head);
	*head = pop;
	return (tmp);
}
