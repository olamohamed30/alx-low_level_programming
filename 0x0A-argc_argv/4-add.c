#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Entry point of fum
 *   * @argc: The num of command line arg
 *    * @argv: The command line arg
 *     * Return: 0 if Succ
      */

int main(int argc, char *argv[])
{
	int in, jn, sum = 0;

	for (in = 1; in < argc; in++)
	{
		for (jn = 0; argv[in][jn]; jn++)
		{
			if (argv[in][jn] < '0' || argv[in][jn] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
