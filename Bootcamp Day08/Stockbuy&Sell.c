#include<stdio.h>
int max(int , int);
int maxProfit(int price[],int start, int end)
{
    if(end<=start)
    {
        return 0;
    }
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for( int j=i+1;j<=end;j++)
        {
            if(price[j]>price[i]);
            {
                int curr_profit=price[j]-price[i]+maxProfit(price,start,i-1)+maxProfit(price,j+1,end);
                profit=max(profit,curr_profit);
            }
        }
    }
    return profit;
}

int max(int a, int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int price[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
    }
    int r=maxProfit(price,0,n-1);
    printf("Maximum profit: %d\n",r);
    return 0;
}