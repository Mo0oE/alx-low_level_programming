#include "function_pointers.h"

/**
 * int_index - fu
 * @array: in
 * @size: in
 * @cmp: in
 * Return: none
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
