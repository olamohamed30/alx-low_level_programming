#include "main.h"
/**
 *  * factorial - returns length
 *   * @n: string
 *    * Return: length
     */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
