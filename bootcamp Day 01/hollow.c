#include<stdio.h>
void main()
{
    int i,n,j;
    printf("enter the no:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(int k=0;k<n-i-1;k++)
         {
            printf(" ");
         }
      for(j=0;j<i+1;j++)
      {
        if(i==n-1 || j==0 || j==i) {
         printf("* ");
        }
         else
         {
         printf("  ");
         }
      }
      
      printf("\n");
    }

}