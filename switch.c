#include<stdio.h>
int main()
{
//	int a=77 ,b=8, c=3;
	int sum; 
	int a,b;
	printf("enter your choice");	
	scanf("%d",&sum);
	printf("enter two intiger");
	scanf("%d %d",&a,&b);
	
//	scanf("%c",&choice);
		switch(sum)
	{
		case 1:printf(" %d ",a+b);
		break;
		case 2 :printf("%d ",a-b);
		break;
		case 3 :printf("%d ",a*b);
		break;
		
		default :printf(" enter a default");
	}
		
		
	return 0;	
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

