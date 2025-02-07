#include<stdio.h>
int removeDuplicate(int arr[],int n)
{   
    int i;
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(i=1;i<n;i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(i=0;i<res;i++)
    {
        arr[i]=temp[i];
    }
      return res;
}

void main()
{
    int n,i;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    int f=removeDuplicate(arr,n);
    printf("Reversed array:\n");
    for(i=0;i<f;i++)
    {
        printf("%d\n",arr[i]);
    }
}