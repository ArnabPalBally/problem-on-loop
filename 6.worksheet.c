#include<stdio.h>

int main()
{
	int i=1,n,q;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n){
		q=i*i*i;
		
		printf("%dcube:%d\n",i,q);
		i=i+1;
	}
	
}
