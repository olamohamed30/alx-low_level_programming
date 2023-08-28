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
	unsigned int o;

	for (o = 0; o < n; o++)
	{
		s[o] = b;
	}
	return (s);
}
