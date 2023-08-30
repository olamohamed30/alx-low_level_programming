#include "main.h"
/**
 *  * _strlen_recursion - returns length
 *   * @st: string
 *    * Return: length
    */
int _strlen_recursion(char *st)
{
	if (*st == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(st + 1));
}
