//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>= 'a' && ch<= 'z')
    {
        printf("\nThe character %c you entered is lower case",ch);
    }
    else if(ch>= 'A' && ch<= 'Z')
    {
        printf("\nThe character %c you entered is upper case",ch);
    }
    else if(ch>= '0' && ch<= '9')
    {
        printf("\nThe character %c you entered is a digit",ch);
    }
    else 
    {
        printf("\nThe character %c you entered is a special character",ch);
    }
    return 0;
}