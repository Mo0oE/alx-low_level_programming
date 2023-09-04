#include "main.h"

/**
 * str_concat - fu
 * @s1: in
 * @s2: in
 * Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int i, y;
	int **allgrid;

	if (width <= 0 || height <= 0)
		return (NULL);

	allgrid = calloc(height, sizeof(int *));

	if (allgrid == NULL)
		return (0);

	for (i =0; i < height; i++)
	{
		allgrid[i] = calloc(width, sizeof(int));
		if(allgrid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(allgrid[i]);
			free(allgrid);
			return (NULL);
		}
	}
	return (allgrid);
}