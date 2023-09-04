#include "main.h"
#include <stdlib.h>

/**
 *  * str_concat - Concat two str.
 *   * @s1: The first str.
 *    * @s2: The second str.
 *     * Return: Point to the concatenated / NULL on fail.
      */
char *str_concat(char *s1, char *s2)
{
	    char *both;
	    unsigned int in = 0, jn = 0, l1 = 0, l2 = 0;

		if (!s1)
			s1 = "";
		if (!s2)
			s2 = "";

		while (s1[l1])
			l1++;
		while (s2[l2])
			l2++;

		both = malloc(l1 + l2 + 1);
		if (!both)
			return (NULL);

		while (in < l1)
		{
			both[in] = s1[in];
			in++;
		}
		while (jn < l2)
		{
			both[in + jn] = s2[jn];
			jn++;
		}

		both[in + jn] = '\0';

		return (both);
}
