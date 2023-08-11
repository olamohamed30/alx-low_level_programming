#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Start the program
 * Description: print all nom =atof
 * Return: 0 if right
 */
int main(void)
{
int chl;
for (chl = 0; chl < 16; chl++)
{
if (chl < 10)
{
putchar(chl + '0');
}
else
putchar(chl - 10 + 'a'); /* Convert the digit to  letter */
}
putchar('\n'); /* newline */
return (0);
}
