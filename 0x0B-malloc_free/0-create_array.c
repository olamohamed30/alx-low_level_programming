#include "main.h"
#include <stdlib.h>
/**
 *  * create_array - creat an array
 *   * @size: The size of array
 *    * @c: The char in the arr
 *     * Return: arr if succ, null
       */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int in;

	if (size == 0)
	{
		return (NULL);
	}

	ar = (char *)malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (in = 0; in < size; in++)
	{
		arr[in] = c;
	}

	return (ar);
}
