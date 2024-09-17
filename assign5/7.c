#include <stdio.h>

int main()
{
	int arr[20],n;
	printf("Enter no. of array elements : ");
	scanf("%d",&n);
	printf("\nEnter array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);

	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}

void sort(int *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			
			}
		}
	}
}	
