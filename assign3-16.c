#include<stdio.h>
int main(void)
{
int op1,op2,choice,res;
char opr;

printf("enter op1,op2");
scanf("%d\n %d",&op1,&op2);
printf("opr1=%d opr2=%d",op1,op2);


printf("enter opr");
scanf("%c\n",&opr);
printf("opr=%c");


switch(choice)
{
case '+':
res=op1+op2;
printf("%d",res);
break;

case '-':
res=op1-op2;
printf("%d",res);
break;

case '*':
res=op1*op2;
printf("%d",res);

break;

case '/': 
if(op2==0)
res=op1/op2;
printf("%d",res);
else
printf("invalid");

break;

//case 5:
//exit(-1);
}
return 0;
}




