#include <stdio.h>

int main()
{
	int arr[100],n;
	printf("ENter no. of elements :");
	scanf("%d",&n);

	accept(arr,n);
	reverse(arr,n);

	for(int i=0; i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

void accept(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void reverse(int *arr,int n)
{
	for(int i=0; i<n/2;i++)
	{
		int t;
		t=arr[i];
		arr[i]=arr[(n-1)-i];
		arr[(n-1)-i]=t;

	}
}
