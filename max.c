#include<stdio.h>
int main()
{
	
	int arr[5]={4,5,7,9,2};
	int max ,sec_max,k;
	max=arr[0];
	for(k=0;k<5;k++)
	  {
	  	 if(arr[k]>max)
	  	 {
	  	 	max=arr[k];// 70 
		   }
	  }
	  
	  printf("first max %d\n",max); 
	  
	  
	 // int arr[5]={4,5,7,9,2};
	  sec_max=arr[0];
	  for(k=0;k<5;k++)
	  {
	  	if(arr[k]>sec_max&&arr[k]!=max)
	  	{
	  		sec_max=arr[k];  //5 7 9
		  }
	  	
	  }
	printf("sec max %d", sec_max);
	
	
	
	
	
	
	
	
	
	return 0;
}