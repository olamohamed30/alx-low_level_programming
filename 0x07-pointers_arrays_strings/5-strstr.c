#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a sub
 *@haystack: The string
 *@needle: The sub to search within haystack
 *Return: Pointer to the beg of the located sub
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
