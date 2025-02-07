#include<stdio.h>
int max(int , int);
int MaxEvenodd(int arr[], int n)
{
    int res=0;
    int curr=0,i;
    for(i=0;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || arr[i]%2!=0 && arr[i-1]==0)
        {
            curr++;
            res=max(res,curr);
        }
        else
        {
            curr=1;
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
    int f=MaxEvenodd(arr,n);
    printf("maximum length of even-odd array: %d\n",f);
    return 0;
}