#include "main.h"
#include <stdlib.h>

/**
 *  * array_range - Frees a 2D grid previously created by alloc_grid.
 *   * @min: The num of rows.
 *    * @max: The num of rows.
 *     * Return: vpoid.
      */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (!p)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		p[i] = min + i;
	}
	return (p);
}
