#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter no:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    for(j=0;j<i;j++)
    {
        printf(" ");
    }
    for(k=0;k<n-i;k++)
    {
        printf("*");
    }
for(k=0;k<n-i-1;k++)
{
    printf("*");
}
 printf("\n");
  }
 
}