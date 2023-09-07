#include "main.h"
#include <stdlib.h>

/**
 *  * _calloc - Frees a 2D grid previously created by alloc_grid.
 *   * @nmemb: The num of rows.
 *    * @size: The num of rows.
 *     * Return: vpoid.
      */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *allp;
	if (nmemb == 0 || size == 0)
		return (NULL);

	allp = malloc(nmemb * size);

	if (!allp)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		allp[i] = 0;
	}

	return (allp);
}
