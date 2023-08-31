#include "main.h"

/**
 *  * is_prime_number - check n is a prime
 *   * @n: the num
 *    * Return: 1\prime, 0 if not
     */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}

/**
 *  * helpp - helper fun to check prim
 *   * @n: the num
 *    * @curr: the current divisor
 *     * Return: 1 /prime, 0 if not
      */
int helpp(int n, int curr)
{
	if (curr == n)
		return (1);
	if (n % curr == 0)
		return (0);
	return (helpp(n, curr + 1));
}

