#include "main.h"

/**
 * print_last_digit- Checks if n is +ve -ve 0.
 * @nu: The character to check.
 * Return: 1 if the =ve +, 0 otherwise - for -ve.
 */
int print_last_digit(int nu)
{
int last = nu % 10;
if (nu < 0)
last = last * (-1);
_putchar(last + '0');
return (last);
}
