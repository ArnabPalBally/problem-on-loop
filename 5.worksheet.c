#include<stdio.h>

int main()
{
	float i=1,sum=0;
	float avg;
	while(i<=10){
		sum=sum+i;
		i=i+1;
	    avg=sum/10;
	}
	printf("sum:%f",sum);
	printf("avg:%f",avg);
}
