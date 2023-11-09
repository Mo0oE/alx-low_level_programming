#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function to print doubly linked lists
 * @h: the list to be printed
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
