#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	        int l = 10;
		    int randomIndex;
		        int in;

			    srand(time(NULL));

			        for (in = 0; in < l; in++) 
					    {
						            randomIndex = rand() % (sizeof(charset) - 1);
							            printf("%c", charset[randomIndex]);
								        }
				    printf("\n");
				        return 0;
}
