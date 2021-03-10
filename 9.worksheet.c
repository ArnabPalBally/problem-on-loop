#include<stdio.h>

int main()
{
	int i=1,sum=0,n;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2!=0){
			printf("%d",i);
			sum=sum+i;
			
		}
		printf("the sum is:%d",sum);
	}
}
