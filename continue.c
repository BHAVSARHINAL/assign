#include<stdio.h>
int test()
{
	int i;
	for(i=1;i<=8;i++)
{
	if(i==1||i==2||i==10)
	{
	 continue;
   }
	printf("%d\n",i);
}
}
int main()
{
	    test();
		return 0;
}
