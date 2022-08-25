#include<stdio.h>
int main()
{
	  //int 258 ====>852
	int n,r;
	printf("print a num");
	scanf("%d",&n);
	
	while(n>0) 
	
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	
}