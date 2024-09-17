#include <stdio.h>

int main()
{
	int arr[5],sum=0,avg;
	printf("Enter subject marks : ");
	for(int i=1;i<=5;i++)
	{
		printf("\nSubject %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nMarks : ");
	for(int i=1;i<=5;i++)
	{
		printf("\nSubject %d : %d",i,arr[i]);
	}

	
	for(int i=1;i<=5;i++)
	{
		sum = sum + arr[i];
	}

	avg=sum/5;

	printf("Total : %d\nAVerage : %d ",sum,avg);
}
