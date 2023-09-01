#include "main.h"
/**
 * _puts - Prints a string + new line to stdout fun.
 * @str: The string to print.
 * Return: void /nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
