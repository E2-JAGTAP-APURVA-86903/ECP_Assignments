#include<stdio.h>
#include<float.h>

int main(void)
{
float f1=3.342f;
printf("num=%f\n",f1);
printf("num=%g\n",f1);
printf("num=%e\n",f1);
printf("num=%E\n",f1);



printf("\n float %%f %d %to %d",sizeof(float),FLT_MIN,FLT_MAX);
printf("\n double %%lf %d %d to %d",sizeof(double),DBL_MIN,DBL_MAX);
printf("\n long double %%ld %d %d to %d",sizeof(long double),LDBL_MIN,LDBL_MAX);

return 0;
}


