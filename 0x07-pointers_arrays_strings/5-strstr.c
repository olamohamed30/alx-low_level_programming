#include "main.h"
#include <stddef.h>
/**
 *  *_strstr-  memory with  byte.
 *   *  @haystack: Con byte.
 *    *  @needle: Num of bytes .
 *     * Return: dest.
   */

char *_strstr(char *haystack, char *needle)
{
	int in, j;

	for (in = 0; haystack[in]; in++)
	{
		if (haystack[in] == needle[0])
		{
			for (j = 0; needle[j] && haystack[in + j] == needle[j]; j++)
			if (!needle[j])
				return (&haystack[in]);
		}
	}

	return (NULL);
}
