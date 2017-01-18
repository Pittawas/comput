#include<stdio.h>
#include<math.h>
typedef struct cylinderStruct{
	char Name[15];
	int radius, height, volume;	
};
int ReadCylinders(cylinderStruct C[])
{
		FILE *fr;
		int i=0;
		fr = fopen ("cylinder.txt","r");
		if(fr=NULL)
			printf("Cannot open file!\n");
		else
		{
			i=0;
			while(fscanf(fr,"%s %d %d",C[i].Name, &C[i].radius, &C[i].height)!=EOF)
				i++;
			printf("%d records read from cylinder.txt..\n");
			fclose(fr);
		}
		return i;
}

int WriteStat(char NMin[], int VMin, char NMax[], int VMax)
{
	FILE *fw;
	int i=0;
	fw=fopen("c_stat.txt","w");
	if(fw==NULL)
		printf("Cannon opan file!\n");
		else
		{
			printf("Statistic is writen to c_stat.txt..\n",i);
			fprintf(fw,"The Biggest cylinder is %s, volume %d\n",NMax,VMax);
			fprintf(fw,"The Smallest cylinder is %s, volume %d\n",NMin,VMin);
			fclose(fw);
		}
		return i;
}

void CylinderVolume(cylinderStruct C[],int N)
{
	int i;
	for(i=0;i<N;i++)
		C[i].volume=3.1416*C[i].radius*C[i].radius*C[i].height;
}

void PrintCyliyders(cylinderStruct C[], int N)	
{
	int i;
	printf("%-15s %10s %10s %10s\n","Name", "Radius", "Height", "Volume");
	printf("--------------|---------|---------|---------\n");
	for(i=0;i<N;i++)
		printf("%-15s %10d %10d %10d\n",C[i].Name, C[i].radius, C[i].height, C[i].volume);
}

void FindMaxMinIndex(cylinderStruct C[], int*MinIndex, int*MaxIndex, int N)
{
	int i, Max = C[i].volume, Min = C[i].volume;
	for(i=0;i<N;i++)
	{
		if(C[i].volume>Max)
		{
			Max = C[i].volume;
			*MaxIndex = i;
		}
		if(C[i].volume<Min)
		{
			Min = C[i].volume;
			*MinIndex = i;
		}
	}
}

int main(void)
{
	cylinderStruct Cylinder[10];
	int MinIndex=0,MaxIndex=0, NumberOfCylinders;
	NumberOfCylinders = ReadCylinders(Cylinder);
	CylinderVolume(Cylinder, NumberOfCylinders);
	PrintCyliyders(Cylinder, NumberOfCylinders);
	FindMaxMinIndex(Cylinder, &MinIndex, &MaxIndex, NumberOfCylinders);
	WriteStat(Cylinder[MinIndex].Name, Cylinder[MinIndex].volume, Cylinder[MaxIndex].Name ,Cylinder[MaxIndex].volume);
}
