#include<stdio.h>
int main()
{
	int n,m,temp;
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
        printf("Rotated array:\n");
   
   
    int left=0,right=n-1;//270 rotate
    while(left<right)
    {
        for(i=0;i<n;i++)
        {
          temp=b[left][i];
          b[left][i]=b[right][i];
          b[right][i]=temp;
        }
       left++;
       right--;
    }
    
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}