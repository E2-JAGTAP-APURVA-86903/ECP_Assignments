#include<stdio.h>
typedef struct stud{
int rollno;
char name[20];
float marks;
} stud_s;


int main(void)
{
stud_s e;

printf("enter student information:\n");
scanf("%d %s %f",&e.rollno,e.name,&e.marks);

printf("rollno=%d\nname=%s\nmarks=%f\n",e.rollno,e.name,e.marks);
return 0;
}

