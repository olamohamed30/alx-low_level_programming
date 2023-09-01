#include <stdio.h>

/**
 *  * main - Entry point of fum
 *   * @argc: The num of command line arg
 *    * @argv: The command line arg
 *     * Return: 0 (Success)
      */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
