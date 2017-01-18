#include<stdio.h>
int main(void)
{
	int a=1,total=0;
	do{
		total += a;
		printf("%d\n",a);
		a++;
	}while(a<=75);
	printf("Total is %d",total);
}
