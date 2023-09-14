#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  * print_all - prints all.
 *   * @format: list of types of arg
     */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *curr;
	char *p = (char *)format;
	int print = 0;

	va_start(arg, format);
	while (*p)
	{
		if (print)
			printf(", ");
		switch (*p)
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				print = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				print = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				print = 1;
				break;
			case 's':
				curr = va_arg(arg, char*);
				if (curr == NULL)
					printf("(nil)");
				else
					printf("%s", curr);
				print = 1;
				break;
			default:
				print = 0;
				break;
		}
		p++;
	}
	printf("\n");
	va_end(arg);
}
