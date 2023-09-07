#include "main.h"
#include <stdlib.h>

/**
 *  * *string_nconcat - Frees a 2D grid previously created by alloc_grid.
 *   * @s1: The num of rows.
 *    * @s2: The num of rows.
 *     * @n: The num of rows.
 *      * Return: vpoid.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *both;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	if (n >= l2)
		n = l2;

	both = malloc(l1 + n + 1);
	if (!both)
		return (NULL);

	while (i < l1)
	{
		both[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		both[i + j] = s2[j];
		j++;
	}

	both[i + j] = '\0';

	return (both);
}
