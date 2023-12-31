#include "main.h"

/**
 * set_bit - fu
 * @n: in
 * @index: in
 * Return: 0 1 -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	return (!!(*n |= (1 << index)));
}
