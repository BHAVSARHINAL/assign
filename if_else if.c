#include<stdio.h>
int main()
{
	int age;
	
	printf("enter your age");
	scanf("%d",&age);
	
	if(age<18)
	{
		printf(" not eligible for casting voat");
	}
	
	else if(age>18)
	{
		printf("eligible for casting voat");
	}
	
	
	return 0;
	
	
}