#include "lists.h"

/**
 * add_nodeint_int - fu
 * @head: in
 * @n: in
 * Return: pointer
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp = *head;

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
