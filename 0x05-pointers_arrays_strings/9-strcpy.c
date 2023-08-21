#include"main.h"
/**
 *  * _strcpy - copies the string
 *   * @dest: destinateon b
 *    * @src: source string in it
 *     * Return: point back to dest
  */
char *_strcpy(char *dest, char *src)
{
	char *tem = dest;

	while (*src != '\0')
	{
		*tem = *src;
		src++;
		tem++;
	}

	*tem = '\0';
	return (dest);
}
