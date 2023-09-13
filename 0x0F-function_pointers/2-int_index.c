#include "function_pointers.h"
#include <stdio.h>
/**
 *  * int_index - Search int from array.
 *   * @array: A point array of integers.
 *    * @size: The number of elements
 *     * @cmp:  compare values.
 *      * Return: The in of the first element /-1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int in;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (in = 0; in < size; in++)
	{
		if (cmp(array[in]))
		{
			return (in);
		}
	}
	return (-1);
}
