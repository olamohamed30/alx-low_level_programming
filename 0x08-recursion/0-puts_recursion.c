#include "main.h"
/**
 *  * _puts_recursion - print string + newline
 *   * @st: string
 *    * Return: void / nothing
  */
void _puts_recursion(char *st)
{
	if (*st == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*st);
	_puts_recursion(st + 1);
}

