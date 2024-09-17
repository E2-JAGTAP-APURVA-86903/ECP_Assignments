#include <stdio.h>

void accept(int *arr,int n);
void print(int *arr,int n);
int main()
{
	int arr[100],n;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	accept(arr,n);
	print(arr,n);
	
	
}
void accept(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void print(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: %d\n", i, arr[i]);
    }
}
