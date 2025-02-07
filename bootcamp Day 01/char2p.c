#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the no:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        char c='A';
        for(j=0;j<n-i;j++)
        {
          printf("%c",c);
          c++;
        }
        for(k=0;k<n-i-1;k++)
        {
            printf("%c",c-2);
            c--;
        }
        printf("\n");
  
    }
}