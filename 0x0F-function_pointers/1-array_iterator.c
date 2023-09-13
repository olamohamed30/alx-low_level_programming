#include "function_pointers.h"
#include <stdio.h>

/**
 *  * array_iterator - Executes a fun on each element
 *   * @array: A point to the first element
 *    * @size: The size
 *     * @action: A point fun to execute.
 *      * Return: Nothing/void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t in;

	if (array == NULL || action == NULL)
		return;

	for (in = 0; in < size; in++)
		action(array[in]);
}
