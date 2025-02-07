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
    printf("tranpose of matrix =\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[j][i]=a[i][j];  
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]); 
		}
		printf("\n");
	}
	 
	return 0;
}