#include "main.h"

/**
 * array_range - fu
 * @min: in
 * @max: in
 * Return: none
*/

int *array_range(int min, int max)
{
	int size = max - min + 1, i = min, y = 0;
	int *arr;

	if (max < min)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (; i <= max; i++)
	{
		arr[y] = i;
		y++;
	}
	return (arr);
}
