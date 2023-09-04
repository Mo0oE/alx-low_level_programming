#include "main.h"

/**
 * free_grid _ fu
 * @grid: in
 * @height: in
 * Description: None
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
