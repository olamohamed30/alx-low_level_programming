#include "main.h"

/**
 * _abs- Checks if n is +ve -ve 0.
 * @nu: The character to check.
 * Return: 1 if the =ve +, 0 otherwise - for -ve.
 */
int _abs(int nu)
{
if (nu < 0)
nu = nu * (-1);
return (nu);
}
