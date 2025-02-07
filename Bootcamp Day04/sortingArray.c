#include<stdio.h>
int sorting(int arr[], int n)
{
    int i;
     int n0=0,n1=0,n2=0;
     for(i=0;i<n;i++)
     {
           if(arr[i]==0)
           {
            n0++;
           }
           else if(arr[i]==1)
           {
            n1++;
           }
           else
           {
            n2++;
           }
     }
     int j=0;
     for(i=0;i<n0;i++)
     {
        //printf("0 ");
        arr[j]=0;
        j++;
     }
     for(i=0;i<n1;i++)
     {
        //printf("1 ");
         arr[j]=1;
        j++;
     }

     for(i=0;i<n2;i++)
     {
        //printf("2 ");
         arr[j]=2;
        j++;
     }
     for(j=0;j<n;j++)
     {
        {
        printf("%d ",arr[j]);
        }
     }
     return 0;
}


int main()
{
    int n,i,j,k;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sorting(arr,n);
    return 0;
}