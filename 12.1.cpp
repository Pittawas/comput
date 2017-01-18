#include<stdio.h>
#include<math.h>

int ReadCylinders(char N[][15], int r[], int h[])
{
	FILE *fr;
	int i=0;
	fr=fopen("cylinder.txt","r");
	if(fr==NULL)
		printf("Cannon opan file!\n");
		else
		{
			i=0;
			while(fscanf(fr,"%s %d %d", N[i],&r[i],&h[i])!=EOF)
				i++;
			printf("%d records read from cylinder.txt..\n",i);
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

void CylinderVolume(int r[], int h[], int v[], int N)
{
	int i=0;
	for(i=0;i<N;i++)
		v[i]=3.1416*r[i]*r[i]*h[i];
}

void PrintCyliyders(char Name[][15],int r[], int h[], int v[], int N)	
{
	int i;
	printf("%-15s %10s %10s %10s\n","Name", "Radius", "Height", "Volume");
	printf("--------------|---------|---------|---------\n");
	for(i=0;i<N;i++)
		printf("%-15s %10d %10d %10d\n",Name[i], r[i], h[i], v[i]);
}

void FindMaxMinIndex(int v[], int*MinIndex, int*MaxIndex, int N)
{
	int i, Max = v[0], Min = v[0];
	for(i=0;i<N;i++)
	{
		if(v[i]>Max)
		{
			Max = v[i];
			*MaxIndex = i;
		}
		if(v[i]<Min)
		{
			Min = v[i];
			*MinIndex = i;
		}
	}
}

int main(void)
{
	char Name[10][15];
	int radius[10],height[10], volume[10];
	int MinIndex=0,MaxIndex=0, NumberOfCylinders;
	NumberOfCylinders = ReadCylinders(Name, radius, height);
	CylinderVolume(radius, height, volume, NumberOfCylinders);
	PrintCyliyders(Name,radius, height, volume, NumberOfCylinders);
	FindMaxMinIndex(volume, &MinIndex, &MaxIndex, NumberOfCylinders);
	WriteStat(Name[MinIndex], volume[MinIndex], Name[MaxIndex], volume[MaxIndex]);
}
