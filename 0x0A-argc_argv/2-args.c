#include <stdio.h>

/**
 *  * main - Entry point of fum
 *   * @argc: The num of command line arg
 *    * @argv: The command line arg
 *     * Return: 0 if Succ
       */
int main(int argc, char *argv[])
{
	int in;

	for (in = 0; in < argc; in++)
	{
		printf("%s\n", argv[in]);
	}

	return (0);
}
