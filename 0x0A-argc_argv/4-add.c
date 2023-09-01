#include <stdio.h>
#include <stdlib.h>

/**
 *  * is_number - Check if a string +ve number
 *   * @s: The string
 *    * Return: 1 if  num, 0 ifnot
      */
int is_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 *  * main - Entry point of fun
 *   * @argc: The num of command line arg
 *    * @argv: The command line arg
 *     * Return: 0 if succ, 1  error
       */
int main(int argc, char *argv[])
{
	int in, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (in = 1; in < argc; in++)
	{
		if (!is_number(argv[in]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[in]);
	}

	printf("%d\n", sum);
	return (0);
}
