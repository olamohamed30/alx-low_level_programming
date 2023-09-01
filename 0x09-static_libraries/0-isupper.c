#include "main.h"

/**
 * _isupper - is the character upper or lower
 * @c: character to check
 *
 * Return: 1 upper, 0 lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
