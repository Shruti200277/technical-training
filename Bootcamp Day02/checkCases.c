#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any uppercase,lowercase or special character:\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lowercase");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("not a character");
    }
    else
    {
        printf("Special Character");
    }
  
}