#include "main.h"
#include <stdlib.h>

/**
 *  * alloc_grid - Returns a pointer to a 2D array of integers.
 *   * @width: The width
 *    * @height: The height
 *     * Return: Point to the 2D / NULL fail
       */
int **alloc_grid(int width, int height)
{
	int **mat;
	int in, jn;

	if (width <= 0 || height <= 0)
		return (NULL);

	mat = malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);

	for (in = 0; in < height; in++)
	{
		mat[in] = malloc(width * sizeof(int));
		if (!mat[in])
		{
			for (jn = 0; jn < in; jn++)
				free(grid[jn]);
			free(mat);
			return (NULL);
		}

		for (jn = 0; jn < width; jn++)
			grid[in][jn] = 0;
	}

	return (mat);
}
