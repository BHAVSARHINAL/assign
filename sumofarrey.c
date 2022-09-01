#include<stdio.h>
int main()
{
	int a[]={3,4,5,6,7,8},n;
	
	  int sum=0;
	for(n=0;n<6;n++)
	{
	sum=sum+a[n];
	}
	
	printf("%d",sum);
	
	return 0;
	
	
	
}