#include <stdio.h>
/**
 * main - Start the program
 * Description: print all nom +space and comma
 * Return: 0 if right
 */
int main(void)
{
int chl;
for (chl = 0; chl < 10; chl++)
{
putchar(chl + '0');
if (chl < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
