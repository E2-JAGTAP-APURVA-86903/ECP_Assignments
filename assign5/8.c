#include <stdio.h>

int main()
{
	int n,f,key, arr[20];

	printf("Enter no. of elements ");
        scanf("%d",&n);

	printf("Enter elements :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter element you want to search : ");
	scanf("%d",&key);
	
	f=lsearch(arr,n,key);

	if(f==-1)
		printf("Element not found ");
	else
		printf("Element found at position %d ",f);
	       
}

int lsearch(int *arr,int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
