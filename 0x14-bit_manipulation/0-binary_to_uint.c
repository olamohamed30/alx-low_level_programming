#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Convert a bin num to an unsigned int.
 * @b: Point to a string.
 * Return: num, or 0 if not bin
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int bs = 1;
	int l, i;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
		;
	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			res += bs;
		else if (b[i] != '0')
			return (0);

		bs *= 2;
	}

	return (res);
}
