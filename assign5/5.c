#include <stdio.h>

int maximum(int*,int);
int minimum(int*,int);
int main()
{
        int arr[]={1,14,2,6,4,10},n,max,min;
        n=sizeof(arr)/sizeof(arr[0]);
        max=maximum(arr,n);
	min=minimum(arr,n);
        printf("Maximum element is %d\nMinimum element is %d\n",max,min);

}

int maximum(int *arr,int n)
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
int minimum(int *arr,int n)
{
        int m;
        m=arr[0];
        for(int i=1;i<n;i++)
        {
                if(m>arr[i])
                        m=arr[i];
        }
        return m;
}
     
