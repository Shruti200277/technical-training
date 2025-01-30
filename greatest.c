#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any three value:\n");
    scanf("%d%d%d",&a,&b,&c);
    /**if(a>b && a>c)
    {
      
        printf("Largest No is: %d",a);
    }
      else if(b>c)
        {
            printf("Largest No is: %d",b);
        }
    else
    {
        printf("Largest No is: %d",c);
    }**/
    (a>b)&&(a>c)?printf("Largest No is: %d",a):(b>c)?printf("Largest Nos is: %d",b):printf("Largest no is: %d",c);
}