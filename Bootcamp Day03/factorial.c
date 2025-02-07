#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }

return fact;
}

void main()
{
     int a;
    printf("Enter any number:\n");
    scanf("%d",&a);
   // num=a;
    /**while(a!=0)
    {
        m=a%10;
        sum+= factorial(m);
        a=a/10;
        count++;
    }
    printf("Number of digits: %d\n",count);
    if(sum==num)
    {
        printf("Strong number: %d",num);
    }
    else
    {
         printf("Not a Strong number: %d",num);
    }**/
   int f=factorial(a);
   printf("Factorial of a number is: %d",f);
}

