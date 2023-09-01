#include "main.h"
#include <stddef.h>
/**
 *  *_strpbrk-  memory with  byte.
 *   *  @s: Con byte.
 *    *  @accept: Num of bytes .
 *     * Return: dest.
 */

char *_strpbrk(char *s, char *accept)
{
	int in, j;

	for (in = 0; s[in] != '\0'; in++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[in] == accept[j])
			{
				return (&s[in]);
			}
		}
	}

	return (NULL);
}
