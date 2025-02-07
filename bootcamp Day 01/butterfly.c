#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the no:\n");
    scanf("%d",&n);
        for (int i = 1; i <= 2 * n - 1; i++)
         {
        for (int j = 1; j <= 2 * n - 1; j++) 
        {
            if (i == j || i==1|| j==1 || i==2*n-1||j==2*n-1)
            {
                printf("* ");
            }
            else if (i + j == 2 * n)
            {
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
   
