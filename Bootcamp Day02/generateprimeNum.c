#include<stdio.h>
void main()
{
    int n,i,range;
    printf("Enter any number:\n");
    scanf("%d",&n);
    int count;
    printf("prime number between the range 1 to %d:\n",n);
    for(range=1;range<=n;range++)
    {
        count=0;
        for(i=2;i<=range/2;i++)
        {
            if(range%i==0)
                {
                    count++;
                    break;
                }
        }
        if(count==0 && range!=1)
            {
                printf("Prime numbers are: %d\n",range);
            }
     
    }
     
   
}