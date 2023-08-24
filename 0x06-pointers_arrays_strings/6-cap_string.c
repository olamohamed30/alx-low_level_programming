#include "main.h"
/**
 * is_separator - check char is a separator
 * @c: char to check
 * Return: 1 if truue, 0 if false
 */
int is_separator(char c)
{
char sep[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; sep[i]; i++)
{
if (c == sep[i])
return (1);
}
return (0);
}
/**
 * cap_string - capitalizes  words of
 * @s: string
 * Return:string
 */
char *cap_string(char *s)
{
int i;

if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;

for (i = 1; s[i]; i++)
{
if (is_separator(s[i - 1]) && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
return (s);
}
