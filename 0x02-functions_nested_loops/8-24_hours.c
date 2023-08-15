#include "main.h"
/**
 * jack_bauer- Checks if n is +ve -ve 0.
 * Return: 1 if the =ve +, 0 otherwise - for -ve.
 */
void jack_bauer(void)
{
int h, min;
for (h = 0; h <= 23; h++)
{
for (min = 0; min <= 59; min++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
