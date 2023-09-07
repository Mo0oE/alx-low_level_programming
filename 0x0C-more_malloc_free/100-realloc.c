#include "main.h"

/**
 * _realloc - fu
 * @old_size: in
 * @new_size: in
 * Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *arr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);

	if (arr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (arr);
	while (--old_size)
		arr[old_size] = *(int *)ptr;

	return (arr);

}

