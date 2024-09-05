#include<stdio.h>
int main(){
int n1,n2;

printf("enter n1:");
scanf("%d",&n1);
printf("enter n2:");
scanf("%d",&n2);

if(n1>0&&n2>0)
{
printf("it is in first quadreant");
}
else if(n1>0||n2<0){
printf("it is in second quadrant");
}
else if(n1<0||n1>0){
printf("it is in fourth quadrant");
}
else if(n1<0&&n2<0){
printf("it is in third quadrant");

}
else if((n1>0||n1<0)&&(n2==0))
{
printf("it lies on x-axis");
}
else if((n2>0||n2<0)&&(n1==0)){
printf("it lies on y-axis");
}

else { 
printf("it is on origin");
}
return 0;
}

