#include "main.h"

/**
 *print_to_98- Prints the 9 times table, starting with 0.
 *@n : variable hold the num
 */
void print_to_98(int n)
{
int c;
if (n < 98)
for (c = n; c < 98; c++)
printf("%i, ", c);
else
for (c = n; c > 98; c--)
printf("%i, ", c);
printf("98\n");
}
