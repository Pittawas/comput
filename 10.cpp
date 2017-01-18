#include<stdio.h>
#include<string.h>

int GetAllItems(char Name[][15],int Quantity[],float UnitPrice[])
{
	int i=0;
	printf("Enter name, quantity,and price for item %d[END 0 0 to quit]:",i+1);
	scanf("%s %d %f", Name[i], &Quantity[i], &UnitPrice[i]); 
	while(strcmp(Name[i],"END")!=0)
	{
		i++;
		printf("Enter name, quantity,and price for item %d[END 0 0 to quit]:",i+1);
		scanf("%s %d %f", Name[i], &Quantity[i], &UnitPrice[i]); 
	}
	printf("\n");
	return i;
}


float CalculateTotalPrices(int Quantity[],float UnitPrice[],float TotalPrice[],int NumberOfitems)
{
	int i;
	float TotalAmount = 0.0;
	for(i=0;i<NumberOfitems;i++)
	{
		TotalPrice[i] = Quantity[i]*UnitPrice[i];
		TotalAmount += TotalPrice[i];
 	}
	
	return TotalAmount;
}

void PrintProductDetail(char Name[][15],int Quantity[],float UnitPrice[],float TotalPrice[],int NumberOfitems)
{
	int i;
	printf("-----------------------------------------------------------------\n");
	printf("%-20s %11s %13s %17s\n","Name", "UnitPrice", "Quantity", "Total Price");
	printf("-----------------------------------------------------------------\n");
	for(i=0;i<NumberOfitems;i++)
		printf("%-20s %11.2f %13d %17.2f\n",Name[i], UnitPrice[i], Quantity[i], TotalPrice[i]);
	printf("-----------------------------------------------------------------\n");
}

int main(void)
{
	char CustomerName[15], Name[10][15];
	int Quantity[10], NumberOfitems;
	float UnitPrice[10], TotalPrice[10], TotalAmount;
	printf("Enter customer name[QUIT to stop]:");
	scanf("%s", CustomerName);
	while(strcmp(CustomerName,"QUIT")!=0)
{
	NumberOfitems = GetAllItems(Name,Quantity,UnitPrice);
	TotalAmount= CalculateTotalPrices(Quantity, UnitPrice,TotalPrice,NumberOfitems);
	PrintProductDetail(Name,Quantity, UnitPrice, TotalPrice, NumberOfitems);
	printf("%52s %11.2f\n","TOTAL AMOUNT:", TotalAmount);
		printf("\n");
	
	printf("Enter customer name[END to stop]:");
	scanf("%s",CustomerName);
	}
	printf("+++++++SYSTEM SHUTDOWN+++++++\n");
}
	
	
