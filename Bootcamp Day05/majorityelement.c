#include<stdio.h>
int majorityElement(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>n/2)
            {
                printf("Count:\t %d\n",count);
                return arr[i];
            }
        
    }
    return -1;
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
    int f=majorityElement(arr,n);
    printf("Majority Element: %d\n",f);
    return 0;
}
