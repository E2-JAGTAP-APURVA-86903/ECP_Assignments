#include <stdio.h>

int main()
{
	int arr[]={10,20,30,40,50,60};
	int f,k,n;

	n=sizeof(arr)/sizeof(arr[0]);

	printf("Enter element you want to search : ");
	scanf("%d",&k);

	f=bsearch(arr,0,n-1,k);

	if(f==-1)
		printf("Element not found ");
	else
		printf("Element is found at %d ",f);
}

int bsearch(int *arr,int low, int high, int k)
{
	int mid;
	while(low<=high)
	{
		mid=low + (high-low)/2;

		if(k==arr[mid])
			return mid;
		else if (k>arr[mid])
			low=mid+1;
		else
			high=mid-1;
	}

	return -1;
}
