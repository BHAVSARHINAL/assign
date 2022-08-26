#include<stdio.h>
int main()
{
	char ch;
	printf("enter a charactor");
	scanf("%c",&ch);
	
	if((ch>='a') && (ch<='z'))
	{
		printf("\nthis is a small later");
	}
	else if((ch>='0') && (ch<='9'))
    {
    	printf("\nthis is a digit");
		}	
		else if(ch='*')
		{
			printf("\nthis is a symbol");
		}
	return 0;
	
	
	
	
	
	
	
	
	
	
}