#include "main.h"
#include <stddef.h>

/**
 *  * _strchr-  memory with  byte.
 *   * @s: Con byte.
 *    * @c: Num of bytes .
 *     * Return: dest.
 */
char *_strchr(char *s, char c)
{
	int in;

	for (in = 0; s[in] != '\0'; in++)
	{
		if (s[in] == c)
		{
			return (&s[in]);
		}
	}
	return (NULL);
}
