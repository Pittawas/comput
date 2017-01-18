#include <stdio.h>
int main(void)
{
	int i,j;
	for(i=1; i<=60; i+=10)
	{
		printf("%d minutes \n",i-1);
		for (j=1; j<=60; j+=10)
        {
        	printf("   %d seconds\n",j-1);
		}		
	}
	printf("   %d seconds\n",j-1);
	printf("%d minuter \n", i-1);
	printf("\n An hour is %d minutes and a minute is %d seconds",i-1,j-1);
}
