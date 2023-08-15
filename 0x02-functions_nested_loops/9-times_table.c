##include "main.h"

/**
 *times_table - Prints the time table till 9 starting with 0.
 */
void times_table(void)
{
int r, c, product;

for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
product = r * c;
if (c == 0)
{
_putchar(product + '0');
}
else if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
}
_putchar('\n');
}
}
