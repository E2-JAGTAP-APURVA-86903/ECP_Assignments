#include<stdio.h>
int main(){
int month,year,days;
printf("enter the month:");
scanf("%d",&month);
printf("enter the year:");
scanf("%d",&year);

switch(month)
{
case 1:printf("jan-31 days\n");
break;

case 2:if((year%400==0&&year%10!=0)||(year%4==0)){
printf("feb-29 days and its leap year\n");
}else
printf("feb-28 days and not a leap year\n");
break;

case 3:printf("mar-31 days\n");
break;

case 4:printf("april-30 days\n");
break;

case 5:printf("may-31 days\n");
break;

case 6:printf("june-30 days\n");
break;

case 7:printf("july-31 days\n");
break;

case 8:printf("aug-31 days\n");
break;

case 9:printf("sep-30 days\n");
break;

case 10:printf("oct-31 days\n");
break;

case 11:printf("nov-30 days\n");
break;

case 12:printf("dec-31 days\n");
break;

default:printf("invalid month");

}
return 0;
}

