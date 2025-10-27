//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main()
{  char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' 
        || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            printf("\nThe character %c you entered is a vowel.",ch);
        }
        else
        {
            printf("\nThe character %c you entered is a consonant.",ch);
        }
    }
    else
        {
             printf("\nThe character %c you entered is not a character",ch);
        }
    return 0;
}