#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(void)
{
	float a,b,c,x1,x2,real,imaginary;
		
		printf("Enter values for a,b,and c");
		scanf("%f%f%f",&a,&b,&c);
		if(a==0.0)
		{
			printf("x=infinity");
		}
		else
		{
			if((b*b)-(4*a*c) >=0 )
			
			{
				x1=(-b+sqrt(abs(b*b)-(4*a*c)))/(2*a);
				x2=(-b-sqrt(abs(b*b)-(4*a*c)))/(2*a);
				printf("x1=%.1f\n",x1);
				printf("x2=%.1f\n",x2);
			} 
			else
			{
				real=(-b)/(2*a);
				imaginary=(sqrt(abs((b*b)-(4*a*c))))/(2*a);
				printf("x1=(%.1f) + (%.3f)j\n",real,imaginary);
				printf("x2=(%.1f) - (%.3f)j\n",real,imaginary);
			}
			
		}
		
		
}
