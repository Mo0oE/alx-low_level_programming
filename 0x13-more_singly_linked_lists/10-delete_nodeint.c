#include "lists.h"

/**
 * delete_nodeint_at_index - fu
 * @head: in
 * @index: in
 * Return: 1 -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curent = *head, *tmp, *del;

	if (!index)
	{
		*head = curent->next;
		free(curent);
		return (1);
	}
	while (curent)
	{
		if (index == 1)
		{
			del = curent->next;
			tmp = del->next;
			curent->next = tmp;
			free(del);
			return (1);
		}

		curent = curent->next;
		index--;
	}
	return (-1);
}
