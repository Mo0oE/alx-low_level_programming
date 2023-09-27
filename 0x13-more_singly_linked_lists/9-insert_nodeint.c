#include "lists.h"

/**
 * insert_nodeint_at_index - fu
 * @head: in
 * @idx: in
 * @n: in
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *current = *head;

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current)
	{
		if (idx == 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
		idx--;
	}
	free(new);
	return (NULL);
}
