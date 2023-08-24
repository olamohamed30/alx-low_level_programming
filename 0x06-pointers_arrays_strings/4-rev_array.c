#include "main.h"
/**
 *  * reverse_array - Reverses the con of array of int.
 *   * @a: Point to the array of int
 *    * @n: Num of elements.
     */
void reverse_array(int *a, int n)
{
	int beg = 0;
	int end = n - 1;
	int tem;

	while (beg < end)
	{
		tem = a[beg];
		a[beg] = a[end];
		a[end] = tem;

		beg++;
		end--;
	}
}
