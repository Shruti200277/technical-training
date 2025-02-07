#include<stdio.h>
void main()
{
    int i,n,j,k;
    printf("enter the no:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<i+1;j++)
        {
            printf("%d",j+1);
        }
        int a=i;
        for(k=0;k<i;k++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
}