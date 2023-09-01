#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Entry pointof fun
 *   * @argc: The num of command line arg
 *    * @argv: The command line arg
 *     * Return: 0 if succ, 1  error
       */
int main(int argc, char *argv[])
{
	int t, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);

	if (t < 0)
	{
		printf("0\n");
		return (0);
	}

	c += t / 25;
	t %= 25;

	c += t / 10;
	t %= 10;

	c += t / 5;
	t %= 5;

	c += t / 2;
	t %= 2;

	c += t;

	printf("%d\n", c);
	return (0);
}
