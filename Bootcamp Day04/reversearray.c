#include<stdio.h>
void reverse(int arr[] , int n)
{
    int temp,low=0,high=n-1;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    
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
    reverse(arr,n);
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
   
}