#include<stdio.h>
int main(void)
{
int num;
printf("enter num:");
scanf("%d",&num);

binary_r(num);
return 0;
}
void binary_r(int num)
{
if(num==0)
return;

binary_r(num/2);
printf("%d",num%2);
}
