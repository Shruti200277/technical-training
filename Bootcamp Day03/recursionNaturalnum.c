#include<stdio.h>
int naturalnum(int i,int n)
{
    if(i==n)
    {
        printf("%d\n",n);
    }
    else
    {
        printf("->%d\n",i);
        naturalnum(i+1,n);
    }
}

void main()
{
    int n,i=1;
    printf("Enter a number:\n",n);
    scanf("%d",&n);
    printf("Natural Number are:%d\n",naturalnum(i,n));
}