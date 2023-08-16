#include "main.h"

/**
 *main- entry to program
 *Return: 0 if right, any value if not.
 */
int main(void)
{
int  n1 = 1, n2 = 2;
printf("%d, %d", n1, n2);
int i;
for (i = 3; i <= 50; i++)
{
int ne = n1 + n2;
printf(", %d", ne);
n1 = n2;
n2 = ne;
}
printf("\n");
return (0);
}
