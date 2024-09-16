#include<stdio.h>
void print_multi(num1,ch);
int main(void)

{
int num1;
char ch;
printf("enter a number:");
scanf("%d\n",num1);
printf("enter a character:");
scanf("%*c%c\n",ch);

print_multi(num1,ch);

void print_multi(int num1,char ch)
{
for(int i=0;i<num1;i++)
{
printf("%c",ch);
}
} return 0;
}
