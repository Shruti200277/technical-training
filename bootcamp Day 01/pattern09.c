#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            printf("  ");
        }
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            printf("    ");
        }
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}