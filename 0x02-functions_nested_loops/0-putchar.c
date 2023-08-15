#include "main.h"

/**
 * main - Entry point
 * Description: Prints "_putchar" + a newline
 * Return: 0 (Success)
 */
int main(void)
{
char str[] = "_putchar\n";
int c;
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
return (0);
}
