#include<stdio.h>

int sum(int y)
{

 if(y>1)
   {
	return
	y*sum(y-1); //2*1=2 3*2=6 4*3=12 5*4=20
   }
}

int main()
{
	
	printf("%d",sum(4));
	return 0;
	
}