#include<stdio.h>
//void swap(int *p1,int *p2);
int main(void)
{
int n1=10,n2=20;

printf("before swap: n1=%d n2=%d\n",n1,n2);

swap(&n1,&n2);

printf("after print: n1=%d n2=%d\n",n1,n2);

return 0;
}
void swap(int *p1,int *p2)
{
*p1= *p1 ^ *p2;
*p2= *p1 ^ *p2;
*p1= *p1 ^ *p2;

}


