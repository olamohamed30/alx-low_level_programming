#include <stdio.h>
/**
 *main- entry to program
 *Return : 0 if right
 */
int main(void)
{
int i;
int sum = 0;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
