#include <stdio.h>
int main(void)
{
	int i, sum=0;
	for(i=1;i<=10;i++)
	{
		sum += 2;
		printf("sum = %d + 2 = %d \n",sum-2,sum);
	}
	printf("\n Once the i is 10, the totle of sum is %d",sum);
}
	
