#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void)
{
	char FoodType[10];
	int  Choice;
	printf("Welcome to vending Machine. Enter Sandwich or Beverage : ");
	scanf("%s", &FoodType);
	//clrscr();
	if (strcmp(FoodType,"Sandwich")==0)
	{
		printf("Enter 1- Tuna ($30), 2- Hamburger ($40), 3- Ham ($35) : ");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1 : printf("Thank you. Please put in $30 for your Tuna. "); break;
			case 2 : printf("Thank you. Please put in $40 for your Hamburger. "); break;
			case 3 : printf("Thank you. Please put in $35 for your Ham. "); break;
			default : printf("Incorrect Input."); break;
		}
	}
	
	else if ( strcmp(FoodType,"Beverage")==0)
	{
		printf("Enter 1- Cake ($13), 2- Sprite ($15), 3- Beer ($40) :");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1 : printf("Thank you. Please put in $13 for your Coke. "); break;
			case 2 : printf("Thank you. Please put in $15 for your Sprite. "); break;
			case 3 : printf("Thank you. Please put in $40 for your Beer. "); break;
			default : printf("Incorrect Input."); break;
		}
	}
	
	else
		printf("Incorrect Input.");
		printf("Goodbye.\n");
}

