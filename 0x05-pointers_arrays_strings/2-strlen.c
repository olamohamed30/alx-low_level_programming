#include "main.h"
/**
 * _strlen - length of a string.
 * @s: The string to know leanght of
 * Return:length
 */
int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}

return (i);
}
