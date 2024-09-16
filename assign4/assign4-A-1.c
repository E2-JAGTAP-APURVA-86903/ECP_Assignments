#include<stdio.h>
int fact(int num);
int main()
{
int num=5;
printf("num=%d fact(num)=%d\n",num,fact(num));
return 0;
}

int fact(int num)
{
int res=1,i;
for(int i=1;i<=num;i++)
{
res=res*i;
}
return res;
}
