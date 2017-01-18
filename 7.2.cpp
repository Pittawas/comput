#include <stdio.h>
int main(void)
{
	int a=1;
	float temp=0, total=0;
	while(a<=5)
	{
		printf("Enter Temperature Value %d:",a);
		scanf("%f",&temp);
		total+= temp;
		a++;
	}total /=5;
	printf("Average of Temperature 5 value is : %f.",total);
}
