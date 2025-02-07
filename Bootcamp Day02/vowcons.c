#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any number:\n");
    scanf("%c",&ch);
    switch(ch)
    {
       case 'a' :
            printf("%c is vowel",ch);
            break;
       case 'e':
             printf("%c is vowel",ch);
             break;
       case 'i' :
            printf("%c is vowel",ch);
            break;
       case 'o' :
            printf("%c is vowel",ch);
            break;
       case 'u' :
            printf("%c is vowel",ch);
            break;
       default :
            printf("%c is consonant",ch);
            break;
         
    }
}