#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	        int l = 10;
		    int randomIndex;
		        int i;

			    srand(time(NULL));

			        for (i = 0; i < l; i++) 
					    {
						            randomIndex = rand() % (sizeof(charset) - 1);
							            printf("%c", charset[randomIndex]);
								        }
				    printf("\n");
				        return 0;
}

