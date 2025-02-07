#include<stdio.h>
int main()
{
	int n,m;
	printf("enter rows and column\n");
	scanf("%d %d",&n,&m);
	int a[n][m],b[m][n],i,j;
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
        for(j=0;j<m;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            {
                printf(" %d",a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
    printf("\n");
        
    }
    return 0;
}