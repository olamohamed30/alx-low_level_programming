#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Return: void
 */
void print_rev(char *s)
{
int l = 0;

while (*s != '\0')
{
l++;
s++;
}

s--;
while (l > 0)
{
_putchar(*s);
s--;
l--;
}

_putchar('\n');
}
