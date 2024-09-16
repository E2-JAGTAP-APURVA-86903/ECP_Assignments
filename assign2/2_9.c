#include<stdio.h>
int main(){
int n1,rev=0,rem,original;

printf("enter a number:");
scanf("%d",&n1);
original=n1;
while(n1!=0){
rem=n1%10;
rev=rev*10+rem;
n1/=10;

}
if(original==rev){
printf("%d is palindrome");
}
else
printf("%d is not a palindrome");
}


