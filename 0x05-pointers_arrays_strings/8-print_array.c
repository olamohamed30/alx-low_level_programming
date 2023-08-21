#include "main.h"
/**
 * print_array - Prints n elements of an array.
 * @a: Point array.
 * @n: Num of elements
 */
void print_array(int *a, int n)
{
int in;

for (in = 0; in < n; in++)
{
printf("%d", a[in]);
if (in != n - 1)
printf(", ");
}
printf("\n");
}
