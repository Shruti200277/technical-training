#include<stdio.h>
int max(int, int);
int maximumSubArraysum(int arr[],int n)
{
    int maxSum=-99999;
    int currSum=0,i,j;
    for(i=0;i<n;i++)
    {
        currSum+=arr[i];
        if(currSum>maxSum)
        {
            maxSum=currSum;
        }
        if(currSum<0)
        {
            currSum=0;
        }
    }
    return maxSum;
}


int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int f=maximumSubArraysum(arr,n);
    printf("maximum sum of subarray: %d\n",f);
    return 0;
}