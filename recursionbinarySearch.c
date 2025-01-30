#include<stdio.h>
int binarySearch(int arr[] ,int left, int right, int ele)
{
    if(left>=right)
    {
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==ele)
    {
        return 1;
    }
    else if(arr[mid]>ele)
    {
        return binarySearch(arr,left,mid-1,ele);
    }
    else
    {
        return binarySearch(arr,mid+1,right,ele);
    }
    return 0;
}

void main()
{
    int ele,i,n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Element have to be found:\n ");
    scanf("%d",&ele);
    int f=binarySearch(arr,0,n-1,ele);
    if(f==1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
}
