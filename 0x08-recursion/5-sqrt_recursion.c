#include "main.h"

/**
 *  * _sqrt_recursion - return the square root
 *   * @n: the number
 *    * Return: the natural square root
     */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 *  * helper - helper fun check for the square root
 *   * @n: the number
 *    * @curr: the current num
 *     * Return: the natural square root
     */
int helper(int n, int curr)
{
	if (n < 0)
		return (-1);

	if (curr * curr == n)
		return (curr);

	if (curr * curr > n)
		return (-1);

	return (helper(n, curr + 1));
}

