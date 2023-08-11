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
char lettc = 'A';
while (letter <= 'z')
{
putchar(letter); /* Print letter */
letter++; /* next letter */
}
while (lettc <= 'Z')
{
putchar(lettc); /* Print letter */
lettc++; /* next letter */
}
putchar('\n'); /* newline after the loop */
return (0);
}
