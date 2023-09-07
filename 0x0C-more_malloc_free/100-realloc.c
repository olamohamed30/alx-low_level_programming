#include "main.h"
#include <stdlib.h>

/**
 *  * _realloc - reallocates a memory block using malloc and free.
 *   * @ptr: point to the memory
 *    * @old_size: size
 *     * @new_size: new size
 *      * Return: point new memory/ NULL if it fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp, *oldp;
	unsigned int i, l;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newp = malloc(new_size);
		if (newp == NULL)
			return (NULL);
		return (newp);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newp = malloc(new_size);
	if (newp == NULL)
	{
		free(ptr);
		return (NULL);
	}

	l = (old_size < new_size) ? old_size : new_size;

	oldp = (char *)ptr;
	for (i = 0; i < l; i++)
		newp[i] = oldp[i];

	free(ptr);

	return (newp);
}
