#include<stdio.h>
#include<limits.h>

int main(void)
{
printf("\n int %%d %-2d %-2d to %-2d",sizeof(int),INT_MIN,INT_MAX);
printf("\n short int %%hd %-2d %-2d to %-2d",sizeof(short int),SHRT_MIN,SHRT_MAX);
printf("\n unsigned char %%c %-2d %-2d to %-2d",sizeof(unsigned char),0,UCHAR_MAX);
printf("\n char %%c %-2d %-2d to %-2d",sizeof(char),CHAR_MIN,CHAR_MAX);
printf("\n unsigned short int %%hu %-2d %-2d to %-2d",sizeof(short int),0,USHRT_MAX);
printf("\n unsigned int %%u %-2d %-2d to %-2d",sizeof(unsigned int),0,UINT_MAX);
printf("\n long int %%ld %-2d %-2d to %-2d",sizeof(long int),LONG_MIN,LONG_MAX);
printf("\n unsigned long int %%lu %-2d %-2d to %-2d",sizeof(unsigned long int),0,ULONG_MAX);

return 0;
}
