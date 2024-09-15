#include<stdio.h>
typedef struct student{
int rollno;
char name[20];
float marks;
}stud_s;

int main(void)
{
 stud_s e;
 accept_student(&e);
 print_student(e);

 return 0;
 }

 void accept_student(stud_s *ptr)
 {
 printf("enter student information:\n");
 scanf("%d %s %f",&ptr->rollno,&ptr->name,&ptr->marks);
 }

 void print_student(stud_s e)
 {
 printf("%d\n %s\n %f\n",e.rollno,e.name,e.marks);
 }

