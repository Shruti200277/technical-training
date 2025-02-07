#include<stdio.h>
int sumofNum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
         return n+(sumofNum(n-1));
    }
}

void main()
{
    int n,i,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    sum=sumofNum(n);
    printf("Sum of n %d number is: %d\n",n,sum);
}
