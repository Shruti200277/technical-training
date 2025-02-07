#include<stdio.h>
int Check_bit_is_set(int n, int k)
{
    int x=(n>>(k-1));
    if(n&1!=0)
    {
       return 1;
    }
    else
        return 0;
   
}

int main()
{
    int n,k;
    printf("Enter the binary digit: \n");
    scanf("%d",&n);
    printf("Enter the kth value: \n");
    scanf("%d",&k);
    if( Check_bit_is_set(n,k))
    {
        printf("%d bit is set:\n",k);
    }
    else
    {
        printf("%d bit is not set:\n",k);
    }
    return 0;
}