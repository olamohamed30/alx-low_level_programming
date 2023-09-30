#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_bit- it is a singly linked list
 * @n: int
 * @indx: kdslsdl;vsv
 * Return: o or 1
 */

int get_bit(unsigned long int n, unsigned int indx)
{
	unsigned long int m = 1UL << indx;

	if (indx >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n & m)
		return (1);
	else
		return (0);
}
