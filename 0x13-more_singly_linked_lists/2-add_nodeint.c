#include "lists.h"

/**
 * add_nodeint - fu
 * @head: in
 * @n: in
 * Return: pointer
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
