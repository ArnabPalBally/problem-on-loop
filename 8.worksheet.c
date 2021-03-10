#include<stdio.h>
int main()
{
	int i=1,j=1,n,mul;
	printf("ENTER A NUMBER :");
	scanf("%d",n);
	while(j<=n){
		while(i<=10){
			mul=i*j;
			i=i+1;
			
			
		}
		j=j+1;
		printf("%d*%d=%d\n",j,i,mul);
		
	}
	return 0;
}
