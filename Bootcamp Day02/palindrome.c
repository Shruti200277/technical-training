#include<stdio.h>
void main()
{
    int a,count=0,sum=0,m,reve,num,arm=0;
    printf("Enter any number:\n");
    scanf("%d",&a);
    num=a;
    while(a!=0)
    {
        m=a%10;
        sum+=m;
        reve=reve*10+m;
        arm+=(m*m*m);
        a=a/10;
        count++;
    }
    printf("Digit count is equal to: %d\n",count);
    printf("sum of digit: %d\n",sum);
    printf("reverse of digit: %d\n",reve);
    if(reve==num)
    {
           printf("%d Number is palindrome:\n",num);
    }
    else
    {
          printf("%d Number is not palindrome:\n",num);
    }
    /**if(arm==num)
    {
           printf("%d is armstrong:\n",num);
    }
    else
    {
          printf("%d  is not armstrong:\n",num);
    }**/
    

}