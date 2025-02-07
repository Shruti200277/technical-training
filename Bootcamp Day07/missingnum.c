#include<stdio.h>
void missing_num(int arr[],int n)
{
    int i,xor=0,j,xor1=0;
    for(i=0;i<n-1;i++)
    {
        xor1=xor1^arr[i];
        xor=xor^(i+1);
    }
    xor=xor^n;
    printf("Missing element : %d",(xor^xor1));
  
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
    missing_num(arr,n);
    return 0;
}