#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the no:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int c='A';
        for(j=0;j<i+1;j++)
        {
            printf("%c",c++);
        }
        printf("\n");
    }
}