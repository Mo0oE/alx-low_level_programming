#include "main.h"

/**
 * get_bit - fu
 * @n: in
 * @index: in
 * Return: 1, 0, -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
