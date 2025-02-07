#include<stdio.h>
int powerof2(int n)
{
    if(n==0)
    {
        return 1;
    }
    
        return 2*powerof2(n-1);
    

}
void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int r=powerof2(n);
    printf("%d",r);
    
}