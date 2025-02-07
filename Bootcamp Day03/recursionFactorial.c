#include<stdio.h>


int factorial(int a)
{
    if(a==0 || a==1)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}
void main()
{
    int n,f;
    printf("Enter any number:\n");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of a number is :%d",f);
}