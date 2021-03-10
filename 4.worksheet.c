#include<stdio.h>

int main()
{
	int i=1,n,sum=0;
		printf("enter number:");
		scanf("%d",&n);
		while(i<=n){
			sum=sum+i;
			
			printf("%d",i);
			i=i+1;
		}
		printf("sum:%d",sum);
	
}
