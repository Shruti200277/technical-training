#include<stdio.h>
void odd_occur_num(int arr[],int n)
{
    int i;
    int ans=0;
    for(i=0;i<n;i++)
     {
        ans=ans^arr[i];
     }
    printf("Only odd occuring number is %d\n",ans);
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
    odd_occur_num(arr,n);
    return 0;
}