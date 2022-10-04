#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a grid
 * @grid: the address to the grid
 * @height: height of  the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
