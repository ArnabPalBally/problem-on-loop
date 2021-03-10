#include<stdio.h>
int main()
{
	int i=1,j=1,n,mul;
	printf("ENTER A NUMBER :");
	scanf("%d",&n);
	while(j<=n){
		while(i<=10){
			mul=j*i;
		
			printf("%d*%d=%d,",j,i,mul);
			i=i+1;
				
		}
		j=j+1;
		i=1;
		
	
		
		printf("\n");
		
	}
	return 0;
}
