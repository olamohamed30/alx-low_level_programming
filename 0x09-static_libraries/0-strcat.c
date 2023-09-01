#include "main.h"

/**
 *  * _strcat - Concat two strings
 *   * @dest: The main string to be edited
 *    * @src: The string to append to dest
 *     * Return: A pointer to the resulting string dest
      */
char *_strcat(char *dest, char *src)
{
int destI = 0;
int srcI = 0;

		    /* Find the terminating null byte of dest */
while (dest[destI])
destI++;

while (src[srcI])
{
dest[destI] = src[srcI];
srcI++;
destI++;
}
dest[destI] = '\0';

return (dest);
}
