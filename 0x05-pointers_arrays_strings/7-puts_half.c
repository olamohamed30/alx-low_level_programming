#include "main.h"
/**
 * puts_half - Prints a string in reverse followed by a new line.
 * @str: The string to be printed in reverse.
 */
void puts_half(char *str)
{
int l = 0;
int beg;

while (str[l] != '\0')
{
l++;
}

if (l % 2 == 0)
{
beg = l / 2;
}
else
{
beg = (l - 1) / 2;
}

while (str[beg] != '\0')
{
_putchar(str[beg]);
beg++;
}
_putchar('\n');
}
