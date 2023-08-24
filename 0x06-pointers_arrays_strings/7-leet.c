#include "main.h"
/**
 * leet -string to 1337
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
int i, j;
char charreplace[] = "aAeEoOtTlL";
char numsreplace[] = "4433007711";

i = 0;
while (s[i] != '\0')
{
for (j = 0; charreplace[j] != '\0'; j++)
{
if (s[i] == charreplace[j])
{
s[i] = numsreplace[j];
break;
}
}
i++;
}

return (s);
}
