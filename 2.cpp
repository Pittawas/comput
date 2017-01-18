#include<stdio.h>
#include<conio.h>
int main(void) 
{
	char Name1[30],  Name2[30], Name3[30];
	int Quantity1, Quantity2, Quantity3;
	float UnitPrice1, TotalPrice1; 
	float UnitPrice2, TotalPrice2; 
	float UnitPrice3, TotalPrice3, TotalAmount, Vat;
	
	
	printf("Enter name, quantity1, and unit price1:");
	scanf("%s %d %f", Name1, &Quantity1, &UnitPrice1);
	printf("Enter name, quantity2, and unit price2:");
	scanf("%s %d %f", Name2, &Quantity2, &UnitPrice2);
	printf("Enter name, quantity3, and unit price3:");
	scanf("%s %d %f", Name3, &Quantity3, &UnitPrice3);
	
	TotalPrice1=Quantity1*UnitPrice1;
	TotalPrice2=Quantity2*UnitPrice2;
	TotalPrice3=Quantity3*UnitPrice3;
	TotalAmount=TotalPrice1+TotalPrice2+TotalPrice3;
	Vat=TotalAmount*0.07;
	
	printf("\n \n %-20s %10s %10s %10s\n", "Name","Quantity", "Unit Price", "Total Price");
	printf("----------------------|--------|----------|----------|\n");
	printf("%-20s %10d %10.2f %10.2f\n", Name1, Quantity1, UnitPrice1, TotalPrice1);
	printf("%-20s %10d %10.2f %10.2f\n", Name2, Quantity2, UnitPrice2, TotalPrice2);
	printf("%-20s %10d %10.2f %10.2f\n", Name3, Quantity3, UnitPrice3, TotalPrice3);
	
	printf("----------------------|--------|----------|----------|\n");
	printf("%40s %10.2f\n ","TotalAmount",TotalAmount );
	printf("%40s %10.2f ","Vat",Vat );
	getch();
}
	
