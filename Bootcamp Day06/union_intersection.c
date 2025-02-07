#include<stdio.h>
void array_intersection(int arr[],int arr1[],int m,int n);
void array_union(int arr[],int arr1[],int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
        {
            if(arr[i]< arr1[j])
            {
                printf("%d ",arr[i]);
                i++;
            }
            else if(arr[i]>arr1[j])
            {
               printf("%d ",arr1[j]);
                j++;
            }
            else
            {
                printf("%d ",arr[i]);
                i++;
                j++;
            }
        }
    while(i<m)
    {
        printf("%d ",arr[i]);
        i++;
    }  
    while(j<n)
    {
        printf("%d ",arr1[j]);
        j++;
    }
}

void array_intersection(int arr[],int arr1[],int m, int n)
{
    int i=0,j=0,flag=0,r;
    for(i=0;i<m;i++)
    {
        r=arr[i];
        for(j=0;j<n;j++)
        {
            if(r==arr1[j])
            {
                printf("%d ", arr1[j]);
                flag=1;
            }
        }
      
    }
      if(flag==0)
        {
            printf("No intersection found:");
        }
}

int main()
{
    int n,i,m;
    printf("Enter the size of an array:\n");
    scanf("%d",&m);
    int arr[m];
    printf("Enter the elements in an array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of second array \n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements in second array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Union: \n");
    array_union(arr,arr1,m,n);
    printf("\nIntersection: ");
    array_intersection(arr,arr1,m,n);
    return 0;
}