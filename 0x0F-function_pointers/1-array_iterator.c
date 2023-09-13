#include "function_pointers.h"

/**
 * array_iterator - fu
 * @array: in
 * @size: in
 * @action: in fu
 * Description: none
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && action && size)
		while (i < (int)size)
			action(array[i++]);
}
