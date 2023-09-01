#include "main.h"

/**
 *  * *_strncpy -  two strings toghether with n bytes from src
 *   * @dest: The main string to be edited.
 *    * @src: append to dest.
 *     * @n: The maximum number of bytes .
 *      * Return: A pointer to dest.
       */
char *_strncpy(char *dest, char *src, int n)
{
	int destI = 0;
	int srcI = 0;

	while (srcI < n && src[srcI])
	{
		dest[destI++] = src[srcI++];
	}
	while (destI < n)
	{
		dest[destI] = '\0';
		destI++;
	}
	return (dest);
}
