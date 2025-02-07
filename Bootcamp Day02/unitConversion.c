#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter any number in cm:\n");
    scanf("%f",&a);
    a=a/100;
    printf("Input no in meter: %.2f\n",a);
    printf("Enter any number in kg:\n");
    scanf("%f",&b);
    b=b/1000;
    printf("Input no in gram: %.2f\n",b);
}