#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter any no\n");
    scanf("%d",&n);
  //  for(i=0;i<n;i++)
  //  {
    //    for(int j=0;j<n;j++)
      //  {
        //    printf("*");
        //}
       // printf("\n");
   // }



   //for(i=0;i<n;i++)
  //{
   // for(int j=0;j<n-1;j++)
   // {
   //     printf("*");
   // }
   // printf("\n");
   //}



//for(i=0;i<n;i++)
// {
 //   for(j=0;j<n-i;j++)
 //   {
 //       printf(" ");
   // }
     //for(int k=0;k<i+1;k++)
       // {
         //   printf("*");
        //}
    //printf("\n");
 //}



//for(i=0;i<n;i++)
//{
//    for(int k=0;k<=i;k++)
//    {
//       printf(" ");
//    }
 //   for(j=0;j<n-i-1;j++)
 //   {
  //      printf("*");
 //   }
  //  printf("\n");
//}


for(i=0;i<n;i++)
{
   for(j=0;j<n-i-1;j++)
  {
       printf(" ");
    }
   for(int k=0;k<i+1;k++)
    {
       printf("*");
  }
   printf("\n");
}


}