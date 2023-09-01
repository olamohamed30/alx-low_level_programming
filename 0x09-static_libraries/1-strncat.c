#include "main.h"

/**
 *  * _strncat -  two strings toghether with n bytes from src.
 *   * @dest: The main string to be edited.
 *    * @src: append to dest.
 *     * @n: The maximum number of bytes .
 *      * Return: A pointer to dest.
   */
char *_strncat(char *dest, char *src, int n)
{
	int destI = 0;
	int srcI = 0;
	int i;

	while (dest[destI])
		destI++;

	for (i = 0; i < n && src[srcI] != '\0'; i++)
	{
		dest[destI++] = src[srcI++];
	}
	dest[destI] = '\0';

	return (dest);
}
