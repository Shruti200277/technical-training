#include<stdio.h>
int Count_set_bit(int n)
{
    int count=0;
    while (n>0)
    {
        n=(n&(n-1));
        count= count+1;
    }
   
    return count;
   
}

int main()
{
    int n;
    printf("Enter the binary digit: \n");
    scanf("%d",&n);
    int r=Count_set_bit(n);
    printf("Number of set bit is %d \n",r);
    return 0;
}