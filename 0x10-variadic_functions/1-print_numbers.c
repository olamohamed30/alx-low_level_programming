#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  * print_numbers - Print num + new line.
 *   * @separator: printed between num
 *    * @n: The num of int passed
     */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int in;

	va_start(args, n);
	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && in < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
