#include "main.h"

/**
 * print_sign- Checks if n is +ve -ve 0.
 * @n: The character to check.
 * Return: 1 if the =ve +, 0 otherwise - for -ve.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
