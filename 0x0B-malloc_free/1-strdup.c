#include "main.h"
#include <stdlib.h>
/**
 *  * _strdup - creat an array
 *   * @str: The size of array
 *    * Return: arr if succ, null
  */
char *_strdup(char *str)
{
	char *str2;
	unsigned int in, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l])
	{
		l++;
	}

	str2 = (char *)malloc(l + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}

	for (in = 0; in < l; in++)
	{
		str2[in] = str[in];
	}
	str2[l] = '\0';

	return (str2);
}
