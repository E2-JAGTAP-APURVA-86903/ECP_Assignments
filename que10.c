#include<stdio.h>
int main(){
int num;
printf("enter a num:");
scanf("%d",&num);

int res;

for(int i=1;i<=10;i++){
res=num*i;
printf("%2d * %2d= %2d\n",num,i,res);
}
return 0;
}
