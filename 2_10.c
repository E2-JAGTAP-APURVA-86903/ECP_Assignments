#include<stdio.h>
int main(){

char ch;
printf("enter the character:");
scanf("%c",ch);

if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
{
/*printf("%c is a alphabet");*/

if(ch>=65&&ch<=90)
{
printf("%c is uppercase");
}
else{
printf("%c is lowercwse");
}
}
else if(ch>=48&&ch<=57){
printf("%d is a digit");
}
else if(ch==32){
printf("it is a space");
}
else if(ch==9){
printf("it is a tab");
}

else if(ch==13){
printf("it is a carriage return");

}
else if(ch==10){
printf("it is a new line");
}

else{
printf("not listed above");
}

return 0;
}

























printf("%c is a letter");
}

if(ch>=65&&ch<=90){
printf("%c it is in upper case");
}

else if(ch>=97&&ch<=122){
printf("%c it is in lower case");
}

else if(ch>=48&&ch<=57){
printf("%d is a digit ");
}

else if(ch>=65

