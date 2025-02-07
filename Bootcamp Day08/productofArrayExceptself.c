#include<stdio.h>
void productExceptself(int arr[],int n,int arr1[])
{
    int i,j,prod;
    for(i=0;i<n;i++)
    {
       prod=1;
       for(j=0;j<n;j++)
       {
        if(i!=j)
        {
            prod*=arr[j];
        }
       }
       arr1[i]=prod;
    }


}

int main()
{
    int n,i;
    printf("Enter the size of element:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    productExceptself(arr,n,arr1);
     printf("The new product array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr1[i]);
    }
    
    return 0;
}