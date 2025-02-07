#include<stdio.h>
int sumofDigit(int n)
{
     if(n==0)
     {
        return 0;
     }
     else
     {
        return (n%10)+sumofDigit(n/10);
     }
}

void main()
{
    int n,sum=0;
    printf("Enter any number:\n");
    scanf("%d",&n);
    sum=sumofDigit(n);
    printf("Sum Of Digit: %d is %d\n",n,sum);
}