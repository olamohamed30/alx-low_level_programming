#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: 1 point int
 * @b: 2 pointer int
 * Return: void /nothing
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
