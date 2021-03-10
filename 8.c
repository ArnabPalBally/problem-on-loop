#include<stdio.h>
int main()
{
	int i=1,j=1,n,mul;
	printf("ENTER A NUMBER :");
	scanf("%d",&n);
	while(j<=n){
		while(i<=10){
			mul=j*i;
			i=i+1;
				
		}
		
		printf("%d=%d*%d\n",mul,j,i);
		j=j+1;
		
	}
	return 0;
}
