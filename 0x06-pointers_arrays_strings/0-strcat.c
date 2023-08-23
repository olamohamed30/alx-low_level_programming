nclude "main.h"

/**
 *  * _strcat - 2 strings toghrter.
 *   * @s1: The destination string.
 *    * @s2: The source string.
 *     * Return: A pointer  string dest.
   */
char *_strcat(char *s1, char *s2)
{
	int destI = 0;
	int srcI = 0;

	while (s1[destI] != '\0')
	{
		destI++;
	}

	while (s2[srcI] != '\0')
	{
		s1[destI] = s2[srcI];
		srcI++;
		destI++;
	}

	s1[destI] = '\0';

	return (s1);
}
