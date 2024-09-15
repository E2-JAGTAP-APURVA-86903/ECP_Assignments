#include<stdio.h>
typedef struct student{
int rollno;
char name[20];
int age;
float marks;
}students;



int main(void){
int count;
students s;

printf("enter students information:");
scanf("%d %*c%c %f ",&s.rollno,s.name,&s.marks);

printf("rollno=%d\n name=%s\n marks=%f\n",s.rollno,s.name,s.marks);

return 0;

}
