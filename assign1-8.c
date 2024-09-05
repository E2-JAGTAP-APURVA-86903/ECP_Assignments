#include<stdio.h>
#include<limits.h>
int main() {
printf("\n char %%c %d to %d",sizeof(char),CHAR_MIN,CHAR_MAX);
printf("\n signed char  %%c %d to %d",sizeof(signed char),SCHAR_MIN,SCHAR_MAX);
printf("\n short int %%d %d to %d",sizeof(short int),SHRT_MIN,SHRT_MAX);
printf("\n int %%d to %d",sizeof(int),INT_MIN,INT_MAX);
printf("\n long int %%ld %d to %d",sizeof(long int),LINT_MIN,LINT_MAX);

return 0;
}

