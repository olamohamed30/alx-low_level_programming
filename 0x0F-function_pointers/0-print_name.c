#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - fun that caales one upper one normal
 * @name:name
 * @f: pointer
 * Return: Nothing/void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
