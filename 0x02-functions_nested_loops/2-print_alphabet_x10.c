#include "main.h"
/**
 * print_alphabet - prints the 10 times alphabet+ newline
 */
void print_alphabet_x10(void)
{
int i;
char cha;
for (i = 0; i < 10 ; i++)
{
for (cha = 'a'; cha <= 'z'; cha++)
_putchar(cha);
_putchar('\n');
}
}
