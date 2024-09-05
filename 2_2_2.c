#include<stdio.h>
int main(){
int n1,n2,res;
char op;

printf("enter n1:");
scanf("%d",&n1);
printf("enter op:");
scanf("%*c%c",&op);
printf("enter n2:");
scanf("%d",&n2);

switch(op)
{
case'+':res=n1+n2;
printf("%d",res);
break;

case'-':res=n1-n2;
printf("%d",res);
break;

case'*':res=n1*n2;
printf("%d",res);
break;

case'/':if(n2!=0){
printf("div =%d",n1/n2);
}else
{
printf("can't divide by zerp");
}
default:printf("invalid");
break;
}
return 0;
}

