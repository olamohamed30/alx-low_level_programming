#include "main.h"
/**
 *  * string_toupper -  lowercase lett  to upper
 *   * @s: The string
 *    * Return: A point to string
     */
char *string_toupper(char *s)
{
	int in = 0;

	while (s[in] != '\0')
	{
		if (s[in] >= 'a' && s[in] <= 'z')
		{
			s[in] -= 32;
		}
		in++;
	}

	return (s);
}
