#include "main.h"

/**
 *  * _memset -  memory with  byte.
 *   * @s: Point to the memory.
 *    * @b: Con byte.
 *     * @n: Num of bytes .
 *      * Return: Point to s.
      */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int in;

	for (in = 0; in < n; in++)
	{
		s[in] = b;
	}
	return (s);
}
