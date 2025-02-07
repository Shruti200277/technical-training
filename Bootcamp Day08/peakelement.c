#include<stdio.h>
void peakElement(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
         if(arr[i]>arr[i+1] )
         {
            if(arr[i]>arr[i-1])
            {
                printf("the peak element is %d:\n and the index is %d:\n",arr[i],i);
            }
         }
    }
}


int main()
{
    int n,i;
    printf("Enter the size of element:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //printf("The index of peak element is:");
    peakElement(arr,n);
    return 0;
}