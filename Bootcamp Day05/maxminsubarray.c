#include<stdio.h>
int max(int , int);
int min(int , int);
int minSum(int arr[] , int n, int k);
int maximumSubArraysum(int arr[],int n,int k)
{
    int maxSum=0;
    for (int i = 0; i + k <= n; i++) {
        int temp = 0;
        for (int j = i; j < i + k; j++) {
            temp += arr[j];
        }
        if (temp > maxSum)
            maxSum = temp;
    }
    /**int currSum=0,i,j;
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
    } */
   return maxSum;
}

int minSum(int arr[] , int n , int k)
{                                                                        
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<k;j++)
        {
            
            curr=curr+arr[j];
            res=min(curr,res);
            
        }
    }
    return res;
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



int min(int a, int b)
{
    if(a<b)
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
    int n,i,k;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of subarray:\n");
    scanf("%d",&k);
    int f=maximumSubArraysum(arr,n,k);
    int r=minSum(arr,n,k);
    printf("maximum sum of %d subarray: %d\n",k,f);
    printf("Minimum sum of %d subarray: %d",k,r);
    return 0;
}