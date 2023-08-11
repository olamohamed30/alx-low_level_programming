#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -Start the program
* Description: Output a sintence if n is +ve ,-ve,zero
* Return: 0 if right
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
