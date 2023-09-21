#include "lists.h"

/**
 * add_node_end - fu
 * @head: in
 * @str: in
 * Return: pointer
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!new || !head)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;
	

	return (new);
}
