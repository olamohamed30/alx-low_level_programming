#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Start the program
 * Description: print all nom comb 1t9
 * Return: 0 if right
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar (i + '0');
putchar (j + '0');
if (i != 8 || j != 9)
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
