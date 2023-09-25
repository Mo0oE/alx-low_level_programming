#include "lists.h"

/**
 * free_listint2 - fu
 * @head: in
 * Description: none
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	head = NULL;
}