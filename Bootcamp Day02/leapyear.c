#include<stdio.h>
void main()
{
    int a;
    printf("Enter any number:\n");
    scanf("%d",&a);
    if(a%4==0 && a%400==0)
    {
        printf("It is a leap year: %d",a);
    }
    else if(a%100!=0)
    {
        printf("It is a leap year: %d",a);
    }
    else
    {
        printf("It is not a leap year: %d",a);
    }
}