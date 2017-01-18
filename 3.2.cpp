#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i;
	srand(time(NULL));
	i = rand() %2500;
	printf("The random number is : %d\n",i);

}
