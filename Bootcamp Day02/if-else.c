#include<stdio.h>
void main()
{
    int a;
    printf("Enter any number:\n");
    scanf("%d",&a);
    /**if(a>0)
    {
        printf("Number is positive: %d",a);
    }
    else if(a==0)
    {
        printf("Number is equal to zero: %d",a);
    }
    else
    {
        printf("Number is negative: %d",a);


    }**/
   (a>0)?printf("Number is positive: %d",a):(a==0)?printf("Number is positive: %d",a):printf("Number is negative: %d",a);
}