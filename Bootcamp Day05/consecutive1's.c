#include<stdio.h>
int max(int , int);
int consecutiveOnes(int arr[] , int n)
{
    int res=0,i,j;
    for(i=0;i<n;i++)
    {
        int curr=0;
        
        for(j=i;j<n;j++)
        {
            if(arr[j]==1)
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        res=max(res,curr);
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
    int f=consecutiveOnes(arr,n);
    printf("Number of consecutive one are: %d\n",f);
    return 0;
}