#include "lists.h"

/**
 * get_nodeint_at_index - fu
 * @head: in
 * @index: in
 * Return: n
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	for (; tmp && i < index; i++)
		tmp = tmp->next;
	return (tmp);
}
