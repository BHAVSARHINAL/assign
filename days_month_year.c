#include<stdio.h>
int main()
{
int days,month,year;
   printf("enter a days");
   scanf("%d",&days);

year=days/365;
month=(days%365)/30;
days=(days%365)%30;


printf(" \n year=%d month=%d days=%d ",year,month,days);




return 0;








}