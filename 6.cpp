#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
int main (void)
{
	char Name[15];
	int WinningNumber,UsersGuess,Score;
	int test, i;
	srand(time(NULL));
	printf("Please enter your name :");
	scanf("%s",Name);
	while(strcmp(Name,"QUIT")!=0)
	{
		WinningNumber = rand()%100+1;  		//7.1
		Score = 100;       						//7.2
		do										//7.3
		{
			printf("Guess the Winning Number :");
			scanf("%d",&UsersGuess);
		if(UsersGuess==WinningNumber)
			{
			printf("That is correct! The Winning Number is %d.\n",UsersGuess);
			}
		else if(UsersGuess > WinningNumber)
			{
			printf("Sorry, The Winning Number is HIGHER than %d.\n",UsersGuess);
			Score = Score - 10;
			}
		else 
			{
			printf("Sorry, The Winning Number is LOWER than %d.\n",UsersGuess);
			Score = Score - 10;
			}
		}while((UsersGuess!= WinningNumber)&&(Score!=0));
			printf("Score This Game: %d.\n",Score);			//7.4
		test =0; i=0; 								//7.5
		while(test ==0)									//7.6
		{
			printf("*-");
			i++;
			if(i==(Score/10))
				{
				test =1;
			}
			else
			{
				test =0;
		}
	}
		printf ("\n\n Please enter your name :");			//7.7
		scanf("%s", Name);								//7.8
	}
}

