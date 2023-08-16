#include "main.h"

/**
 *main- entry to program
 *Return: 0 if right, any value if not.
 */
int main(void)
{
long int  n1 = 1, n2 = 2;
int i;
printf("%ld, %ld", n1, n2);
for (i = 3; i <= 50; i++)
{
long int ne = n1 + n2;
printf(", %ld", ne);
n1 = n2;
n2 = ne;
}
printf("\n");
return (0);
}
