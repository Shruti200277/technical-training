#include<stdio.h>
int secondLargest(int arr[], int n)
{
    int i;
    int res=-1,largest=0;
    for(i=0;i<n;i++)
    {
        if (arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
        else
        {
            res++;
        }
    }
    return res;
}

int main()
{
    int n,i;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int r=secondLargest(arr,n);
    printf("Second largest element is:%d\n",arr[r]);
    
    return 0;
}