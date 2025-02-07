#include<stdio.h>
int powerof2(int n)
{
    return ((n>0)&&(n&(n-1))==0);
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(powerof2(n))
    {
        printf("%d is power of 2",n);
    }
    else
    { 
          printf("%d is not power of 2",n);
    }
    return 0;
}