#include "main.h"

/**
 *  * _print_rev_recursion - print a string backwords
 *   * @st: string  printed
 *    * Return: void/nothing
    */
void _print_rev_recursion(char *st)
{
	if (*st == '\0')
	{
		return;
	}

	_print_rev_recursion(st + 1);
	_putchar(*st);
}
