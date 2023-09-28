#include "main.h"

/**
 * flip_bits - fu
 * @n: in
 * @m: in
 * Return: none
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = m ^ n, count = 0;

	while (t)
	{
		if (t & 1)
			count++;
		t = t >> 1;
	}
	return (count);
}
