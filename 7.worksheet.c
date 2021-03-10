#include<stdio.h>

int main()
{
	int i=1,n,mul;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	while(i<=10){
		mul=n*i;
		printf("%d=%d*%d\n",mul,n,i);
		i=i+1;
	}
}
