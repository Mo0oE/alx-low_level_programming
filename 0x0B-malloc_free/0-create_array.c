#include "main.h"

/**
 * create_array - fu
 * @size: in
 * @c: in
 * Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *cr = (char *) malloc(size);

	if (size == 0)
		return (NULL);
	while (i < size)
	{
		*(cr + i) = c;
		i++;
	}
	return (cr);
}
