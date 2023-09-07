#include "main.h"
#include <stdlib.h>

/**
 *  * *malloc_checked - Frees a 2D grid previously created by alloc_grid.
 *   * @b: The num of rows.
 *    * Return: vpoid.
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
