#include<stdio.h>
#include<math.h>

void GetMatrix(int M[][5], int *rows, int *columns)
{
	int i,j;
	printf("Enter number rows and columns:");
	scanf("%d %d",&*rows, &*columns);
	for(i=0;i<*rows;i++)
		for(j=0;j<*columns;j++)
		{
			printf("Enter [%d, %d] value:",i,j);
			scanf("%d", &M[i][j]);
		}
		printf("\n");
}

void MatrixTranspose(int M[][5], int rows, int columns, int Result[][5], int*ResultRows,
			int*Resultcolumns)
{
	int i,j;
	*ResultRows = columns;
	*Resultcolumns = rows;
	for(i=0;i<*ResultRows;i++)
		for(j=0;j<*Resultcolumns;j++)
			Result[i][j] = M[j][i];
}
int MatrixMultiply(int M1[][5], int rows1, int columns1, int M2[][5], int rows2, int columns2, 
		int Result[][5], int *ResultRows, int *ResultColumns)
{			
	int i,j,k;
	if(columns1!=rows2)
		return 0;
	else
	{
		*ResultRows = rows1;
		*ResultColumns = columns2;	
		for(i=0;i<*ResultRows;i++)
			for(j=0;j<*ResultColumns;j++)
			{
				Result[i][j] = 0;
				for(k=0;k<columns1;k++)
					Result[i][j] += M1[i][k]*M2[k][j];
			}
		return 1;
	}
}
void PrintMatrix(int M[][5], int rows, int columns)
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
			printf("%-3d", M[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int M1[5][5], M2[5][5], M3[5][5], M4[5][5];
	int r1,c1,r2,c2,r3,c3,r4,c4;
	
	printf("Enter Matrix 1:\n");
	GetMatrix(M1, &r1, &c1);
	printf("\n");
	printf("Enter Matrix 2:\n");
	GetMatrix(M2, &r2, &c2);
	printf("\n");
	
	printf("Matrix 1:\n");
	PrintMatrix(M1, r1, c1);
	printf("\n");
	printf("Matrix 2:\n");
	PrintMatrix(M2, r2, c2);
	printf("\n");
	
	MatrixTranspose(M1, r1, c1, M3, &r3, &c3);
	printf("Transpose of Matrix 1 is:\n");
	PrintMatrix(M3, r3, c3);
	printf("\n");
	
	if( MatrixMultiply(M1, r1, c1, M2, r2, c2, M4, &r4, &c4)==0)
		printf("Matrix1 and Matrix2 cannot multiply\n");
	else
	{
		printf("Matrix1 x Matrix2 is:\n");
		PrintMatrix(M4, r4, c4);
	}
}
