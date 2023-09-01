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
	while (*haystack)
	{
		char *beg = haystack;
		char *pat = needle;

		while (*pat && *beg == *pat)
		{
			beg++;
			pat++;
		}
		if (!*pat)
			return (haystack);
		haystack++;
	}
	return (0);
}
