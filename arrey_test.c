#include<stdio.h>
int main()
{
	int a[5]={12,3,75,7,8,},j;
	int sum=0;
	for(j=0;j<5;j++)
	{
		sum=sum+a[j];
	}
	
	printf("%d",sum);
	
	return 0;
	
	
}