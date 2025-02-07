#include<stdio.h>
void main()
{
    int n,m,i,j;
    printf("enter rows and column\n");
	scanf("%d %d",&n,&m);
	int a[n][m],b[m][n];
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the value at %d %d - ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<n;i++)
    {
         if(i%2==0)
         {
            for(j=0;j<m;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
         }
         else
         {
            for(j=m-1;j>=0;j--)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
         }
        
    
    }
        printf("\n");

    
}