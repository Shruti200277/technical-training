 #include<stdio.h>
 void rearrangeArray(int* nums, int numsSize, int* returnSize) 
 {
      int i,negindex=1,posindex=0;
      int neg[numsSize/2] , pos[numsSize/2];
      for(i=0;i<numsSize;i++)
      {
        if(nums[i]<0)
        {
           returnSize[negindex]=nums[i];
           negindex+=2;
        }
        else
        {
           returnSize[posindex]=nums[i];
           posindex+=2;
        }
      }
      posindex=0;
      negindex=0;
      for(i=0;i<numsSize;i++)
      {
        if(i%2==0)
        {
            returnSize[i]=pos[posindex];
            posindex++;
        }
        else
        {
            returnSize[i]=neg[negindex];
            negindex++;
        }
      }
        
 }
   
    
 

 int main()
 {
    int numsSize,i;
    printf("Enter the size of array:\n");
    scanf("%d",&numsSize);
    int returnarray[numsSize];
    int nums[numsSize];
    printf("Enter elements in an array:\n");
    for(i=0;i<numsSize;i++)
    {
         scanf("%d",&nums[i]);
    }
    rearrangeArray(nums,numsSize,returnarray);
    printf("The new rearrange array is:\n");
    for(i=0;i<numsSize;i++)
    {
        printf("%d  ",returnarray[i]);
    }
    return 0;
 }