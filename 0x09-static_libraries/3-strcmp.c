#include "main.h"
/**
 *  * _strcmp - Compares two str.
 *   * @s1: First str
 *    * @s2: Second str
 *     * Return: Diff of the ASCII value
      */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
