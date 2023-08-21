#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	srand(time(NULL));
	int l = 10;
	int i;
	for (i = 0; i < l; i++)
	{
		int randomIndex = rand() % (sizeof(charset) - 1);
		printf("%c", charset[randomIndex]);
		printf("\n");
		return 0;
	}
}
