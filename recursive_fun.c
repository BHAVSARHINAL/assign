#include<stdio.h>
int repeatfun(int x)
{
	if(x<=10)
	{
		printf("%d ",x);
		repeatfun(x+1);
	}
}
int main()
{

    repeatfun(1);


return 0;
}