#include<stdio.h>

typedef struct{
	int hour, minute, second;	
}timeData;
timeData GetDuration(timeData t1,timeData t2)
{
	timeData t3;
	t3.hour=t2.hour-t1.hour;
	t3.minute=t2.minute-t1.minute;
	t3.second=t2.second-t1.second;
	return(t3);
}

void ShowTime(timeData t)
{
	printf(" %02d:%02d:%02d\n",t.hour,t.minute,t.second);
}

int main(void)
{timeData startTime,stopTime,Duration;
startTime.hour=10; startTime.minute=5; startTime.second=33;
printf("Start time: ");
ShowTime(startTime);

stopTime.hour=21; stopTime.minute=55; stopTime.second=41;
printf("Stop time: ");
ShowTime(stopTime);

Duration=GetDuration(startTime,stopTime);
printf("Duration: ");
ShowTime(Duration);
}
