#include "main.h"

/**
 * create_array - fu
 * @size: in
 * @c: in
 * Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *cr =(char*) malloc(size);

	while (i < size)
	{
		*(cr + i) = c;
		i++;
	}
	return (cr);
}
