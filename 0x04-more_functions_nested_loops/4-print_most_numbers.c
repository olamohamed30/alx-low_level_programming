#include "main.h"

/**
 * print_most_numbers - 0 to 9, no 2 and 4
 * followed by a newline
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}

	_putchar('\n');
}
