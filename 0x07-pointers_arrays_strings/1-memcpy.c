#include "main.h"

/**
 *  * _memcpy -  memory with  byte.
 *   * @dest: Point to the memory.
 *    * @src: Con byte.
 *     * @n: Num of bytes .
 *      * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int in;

	for (in = 0; in < n; in++)
	{
		dest[in] = src[in];
	}
	return (dest);
}
