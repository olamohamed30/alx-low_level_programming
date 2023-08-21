#include "main.h"
/**
 * rev_string- Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 * Return: void /nothing
 */
void rev_string(char *s)
{
int beg = 0;
int end;
int l = 0;
char tem;
while (s[l] != '\0')
{
len++;
}

end = l - 1;

while (beg < end)
{
tem = s[beg];
s[beg] = s[end];
s[end] = tem;
beg++;
end--;
}
}
