#include<stdio.h>
void main()
{
    int i,n,j;
    printf("enter the no:\n");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        for(int k=0;k<n-i;k++)
         {
            printf(" ");
         }
      for(j=0;j<i+1;j++)
      {
        if(i==n || j==0 || j==i) {
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
