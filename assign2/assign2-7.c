#include<stdio.h>
int main(void)
{
int year;
printf("enter a year:");
scanf("%d",&year);
printf("year=%d\n");


if(year%4==0 && year%100!=0 || year%400==0)
{
printf("year is leap year  and 366 days");
}
else
{
printf("year is not leap year and 365 days");
}


return 0;
}







