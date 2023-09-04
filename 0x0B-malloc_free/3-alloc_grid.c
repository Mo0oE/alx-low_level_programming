#include "main.h"

/**
 * alloc_grid - fu
 * @width: in
 * @height: in
 * Return: ointer
 */

int **alloc_grid(int width, int height)
{
	int i, y;
	int **allgrid;

	if (width <= 0 || height <= 0)
		return (NULL);

	allgrid = malloc(height * sizeof(int *));

	if (allgrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		allgrid[i] = malloc(width * sizeof(int));
		if (allgrid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(allgrid[i]);
			free(allgrid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (y = 0; y < width; y++)
			allgrid[i][y] = 0;
	return (allgrid);
}
