#include "main.h"
#include <stdlib.h>

/**
 *  * free_grid - Frees a 2D grid previously created by alloc_grid.
 *   * @grid: The 2D matrix.
 *    * @height: The num of rows.
 *     * Return: vpoid.
       */
void free_grid(int **grid, int height)
{
	int in;

	if (grid == NULL)
		return;

	for (in = 0; in < height; in++)
	{
		free(grid[in]);
	}

	free(grid);
}
