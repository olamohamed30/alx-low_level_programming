#include <stdarg.h>
/**
 *sum_them_all- fun add a num of arg
 * *@n : num of arg
 *...: The var arg to be summed.
 *Return: The sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sam = 0;
	va_list args;
	unsigned int in;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (in = 0; in < n; in++)
	{
		sam += va_arg(args, int);
	}

	va_end(args);
	return (sam);
}
