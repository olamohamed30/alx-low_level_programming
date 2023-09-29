#include "main.h"

/**
 * print_binary- it is a singly linked list
 * @n: int 
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int st = 0;

	m = 1UL << (sizeof(n) * 8 - 1);

	while (m)
	{
		if (n & m)
		{
			_putchar('1');
			st = 1;
		} 
		else if (st)
		{
			_putchar('0');
		}

		m >>= 1;
	}

	if (!st)
	{
		_putchar('0');
	}
}
