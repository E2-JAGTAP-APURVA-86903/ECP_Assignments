#include<stdio.h>
int main()
{
int choice;

printf("enter the choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:printf("it's a sunday");
break;

case 2:printf("it's a monday");
break;

case 3:printf("it's a tuesday");
break;

case 4:printf("its a wednesday");
break;

case 5:printf("its' a thursday");
break;

case 6:printf("its a friday");
break;

case 7:printf("its a saturday");
break;

default:printf("invalid input");
break;

}
return 0;
}
