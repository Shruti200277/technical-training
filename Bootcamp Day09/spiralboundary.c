#include<stdio.h>
void spiral(int n,int m, int a[][m])
{
    int top=0,bottom=n-1,left=0,right=m-1,i;
    while(top<=bottom && left<=right)
    {
    for(i=left;i<=right;i++)
    {
        printf("%d ", a[top][i]);
    }
    top++;
    for(i=top;i<=bottom;i++)
    {
        printf("%d ",a[i][right]);
    }
    right--;
    if(top<=bottom)
    {
        for(i=right;i>=left;i--)
        {
            printf("%d ",a[bottom][i]);
        }
        bottom--;
        if(left<=right)
        {
            for(i=bottom;i>=top;i--)
            {
                printf("%d ",a[i][left]);
            }
            left++;
        }
    }
    }
    
}
int main()
{
    int n,m;
    printf("Enter the size of the array:\n");
    scanf("%d %d",&n,&m);
	int a[n][m],i,j;
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the value at %d %d - ",i,j);
			scanf("%d",&a[i][j]);
		}
    }
    printf("Array: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Spiral array: \n");
    spiral(n,m,a);
    return 0;

}