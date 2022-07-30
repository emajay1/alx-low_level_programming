#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid previously created \
by your alloc_grid function
 * @grid: pointer to 2 dimensional array
 * @height: number of row in the array
 */
void free_grid(int **grid, int height)
{
	int i; /* declare variable i for iterating */

	/* if no memory was allocated, return */
	if (grid == NULL)
		return;

	/**
	 * free all 1D array in grid
	 * NB: each element in a 2D array
	 * is a 1D array
	 */
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
