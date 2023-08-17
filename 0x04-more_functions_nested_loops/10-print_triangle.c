#include "main.h"

/**
 * print_triangle - do triangla.
 * @s: The size triangla.
 */
void print_triangle(int s)
{
	int i, j;

	if (s <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 1; j <= s; j++)
	{
		for (i = 0; i < s - j; i++)
		{
			_putchar(' ');
		}
		for (i = 0; i < j; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
