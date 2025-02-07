#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any three number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c || b+c>a || c+a>b )
    {
        printf("It is a triangle\n");
    }
    else
    {
        printf("It is not a triangle\n");
    }
    int a1,a2,a3;
    printf("Enter the angles of triangle:\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
    {
        printf("It is a triangle");
    }
      else
    {
        printf("It is not a triangle");
    }
  
}
