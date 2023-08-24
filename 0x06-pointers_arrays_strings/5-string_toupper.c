#include "main.h"

/**
 * string_toupper - function
 * @c: input
 * Description: none
 * Return: noen
*/

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] <= 'z' && c[i] >= 'a')
			c[i] -= 32;

		i++;
	}

	return (c);
}
