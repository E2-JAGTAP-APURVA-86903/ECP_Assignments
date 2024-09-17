#include <stdio.h>

int max(int*,int);
int main()
{
	int arr[]={1,14,2,6,4,10},n,m;
	n=sizeof(arr)/sizeof(arr[0]);
	m=max(arr,n);
	printf("Maximum element is %d\n",m);

}

int max(int *arr,int n)
{
	int m;
	m=arr[0];
	for(int i=1;i<n;i++)
	{
		if(m<arr[i])
			m=arr[i];
	}
	return m;
}
