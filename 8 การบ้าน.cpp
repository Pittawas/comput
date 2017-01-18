#include<stdio.h>
int main(void)
{
	float r[5],area[5];
	int i,NumberOfCircles;
	printf ("Enter radius %d[0 to stop]:",i+1);
	scanf("%f",&r[i]);
	
	while(r[i]!=0)
	{
		printf("Enter radius %d [0  to stop]:",i+1);
		scanf("%f",&r[i]);
    }
		NumberOfCircles=i;
		for(i=0;i<NumberOfCircles;i++)
			area[i]=3.1416*r*r;

		printf("%10s %10s \n\n","radius","area");
		printf("-----------|-------\n");
		for(i=0;i<NumberOfCircles;i++)
		
			printf("%10.2f %10.2f \n",r[i],area);

}
	
	

		
	
	
	
	
	
	
	
	

