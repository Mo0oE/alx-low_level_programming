#include "lists.h"

/**
 * free_listint - fu
 * @head: in
 * Description: none
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
