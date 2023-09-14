#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  * print_strings - Prints strings+ a new line.
 *   * @separator: The string.
 *    * @n: The num of strings .
     */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int in;
	char *curr;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(arg, n);
	for (in = 0; in < n; in++)
	{
		curr = va_arg(arg, char*);
		if (curr == NULL)
			printf("(nil)");
		else
			printf("%s", curr);

		if (separator != NULL && in < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
