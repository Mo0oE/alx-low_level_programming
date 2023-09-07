#include "main.h"

/**
 * malloc_checked - fu
 * @b: in
 * Return: Nnon;
*/

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
