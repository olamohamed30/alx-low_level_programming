#include "main.h"

/**
 *  * _strspn-  memory with  byte.
 *   * @s: Con byte.
 *    * @accept: Num of bytes .
 *     * Return: dest.
    */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int j;
	int i;
	int fo;

	for (i = 0; s[i] != '\0'; i++)
	{
		fo = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				fo = 1;
				break;
			}
		}

		if (!fo)
		{
			break;
		}
		count++;
	}

	return (count);
}
