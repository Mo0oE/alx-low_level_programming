#include "lists.h"

/**
 * print_listint - fu
 * @h: in
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
