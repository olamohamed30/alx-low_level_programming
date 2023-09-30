#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * set_bit - sets the vahjhkj,nkjnjk
 * @n: pointjnmhjmhe number
 * @indx: index,hjkjjk,.
 * Return: 1 ijijk,mbtcfv
 */
int set_bit(unsigned long int *n, unsigned int indx)
{
	unsigned long int m;

	if (indx >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << indx;
	*n = *n | m;
	return (1);
}
