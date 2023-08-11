#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Start the program
 * Description: print all nom
 * Return: 0 if right
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter); /* Print the current letter */
letter--; /* Move to the next letter */
}
putchar('\n'); /* Print a newline character after the loop */
return (0);
}
