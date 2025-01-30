#include<stdio.h>
int binarySearch(int arr[], int ele, int len)
{
    int low,high,mid;
    low=0;
    high=len-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            return 1;
        }
        else if(arr[mid]>ele)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

    }
    return -1;

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
    int f=binarySearch(arr,ele,n);
    if(f==1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
}


