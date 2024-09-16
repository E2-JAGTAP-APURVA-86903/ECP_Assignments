#include<stdio.h>
int my_power(int b,int exp)
{

if(exp==0)
return 1;
else if(exp==1)
return 2;
else
return b* my_power(b,exp-1);
}
int my_power(int b,int exp);

int main( )
{
int base=2,index=3;
printf("pow:%d\n",my_power(base,index));

return 0;
}
/*
int my_power(int b,int i)
{
int i,res=1, base;
for(i=1;i<=exp;i++)
{
res=res*base;
}
return res;
}
*/
