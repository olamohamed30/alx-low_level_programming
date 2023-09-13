#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - simple operations.
 *   * @argc: num of arg passed.
 *    * @argv: array of point arg
 *     * Return: 0 /other valus
      */
int main(int argc, char *argv[])
{
	int n1, n2, res;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL ||
	(argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')

	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = operation(n1, n2);
	printf("%d\n", res);

	return (0);
}
