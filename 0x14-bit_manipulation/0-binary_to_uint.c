#include "main.h"

/**
 * binary_to_uint - fu
 * @b: in
 * Return: none
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0')
			n *= 2;
		else if (*b == '1')
			n = (n * 2) + 1;
		else
			return (0);
		b++;
	}
	return (n);
}
