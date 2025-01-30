#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int j=n;
    for(i=1;i<=n;i++)
    {
        printf("%d ",j);
        j--;
    }
}