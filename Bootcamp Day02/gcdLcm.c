#include<stdio.h>
void main()
{
    int a,b,gcd,lcm,rem,num,denom;
    printf("Enter any two number:\n");
    scanf("%d%d",&a,&b);
    num=a>b?a:b;
    denom=a<b?a:b;
    rem=num%denom;
    while(rem!=0)
    {
        num=denom;
        denom=rem;
        rem=num%denom;
    }
    gcd=denom;
    lcm=a*b/gcd;
    printf("GCD of a number is: %d\n",gcd);
    printf("LCM of a number is: %d",lcm);
}