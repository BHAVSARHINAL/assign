#include<stdio.h>
int main()
{
	int a[5];
	int x,j,temp;
	for(x=0;x<5;x++)
	{
		scanf("%d",&a[x]);
	
	}
	for(j=0;j<5;j++)
	{
	
 
      if(a[x]>a[j])
      
      {
      	temp=a[x];
      	a[x]=a[j];
      	a[j]=temp;
	  }
      
      
  }
      
      


      printf("array elements ...");
      
   for(x=0;x<5;x++)
{
	printf("%d",a[i]);


}

return 0;
}

