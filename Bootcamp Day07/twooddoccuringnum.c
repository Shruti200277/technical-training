#include<stdio.h>
void two_odd_occuring_num(int arr[],int n)
{
    int x=arr[0];
    for(int i=1;i<n;i++)
    {
        x=(x^arr[i]);
    }
    int k=(x&(~(x-1)));
    int res1=0, res2=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]&k)!=0)
        {
            res1=res1^arr[i];
        }
        else
        {
            res2=res2^arr[i];
        }
    }
    printf("Two odd appearing numbers are %d and %d\n",res1,res2);
   
   
}
int main()
{
    int n,i;
    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    two_odd_occuring_num(arr,n);
    return 0;
}