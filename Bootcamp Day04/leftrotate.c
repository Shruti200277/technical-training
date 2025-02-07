#include<stdio.h>
void leftrotate(int arr[] , int n)
{
    int temp,i;
    temp=arr[0];
    for(i=0;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void main()
{
    int n,i;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    leftrotate(arr,n);
    printf("Rotated array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}