#include<stdio.h>
int main(){
int emp_id,dept_no;
char dc;

printf("enter the employee id:");
scanf("%d",&emp_id);
printf("enter dept_no:");
scanf("%d",&dept_no);
printf("enter dc:");
scanf("%*c%c",&dc);

switch(dept_no)
{
case 10:printf("employee with emp_id %d working in Marketing department ",emp_id);
break;

case 20:printf("employee with emp_id %d working in management department",emp_id);
break;

case 30:printf("employee with emp_id %d working in Sales department",emp_id);
break;

case 40:printf("employee with emp_id %d working in Designing department",emp_id);
break;

default:("invalid dpartment number\n");
break;
}
switch(dc) 
{
case'M':printf("as a Manager\n");
break;

case'S':printf("as a Supervisior\n");
break;

case's':printf("as a Security Officer \n");
break;

case'C':printf("as a Clerk\n");
break;

}
return 0;
}
