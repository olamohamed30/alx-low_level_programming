#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Start the program
 * Description: print all alphapitic letters
 * Return: 0 if right
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter == 'e' || letter == 'q')
continue;
putchar(letter); /* Print letter */
letter++; /* next letter */
}
putchar('\n'); /* newline after the loop */
return (0);
}
