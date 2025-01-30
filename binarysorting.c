#include<stdio.h>
int sorting(int arr[], int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,i;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n],len;
    len=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the element in an array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(sorting(arr,len))
    {
    printf("Array is sorted");
    }
    else
    {
        printf("Array is not sorted");
    }
    return 0;
}