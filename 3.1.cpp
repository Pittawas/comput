#include <stdio.h>
#include <math.h>
main()
{
	float a,b,c;
	float x1,x2;
	printf ("Please enter a,b,c :");
	scanf ("%f %f %f",&a, &b, &c);
	x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("The values of x are %0.2f and %0.2f\n",x1,x2);
}
