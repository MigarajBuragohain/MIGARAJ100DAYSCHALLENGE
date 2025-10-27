//Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
    int m,n,rev=0,rem;
    printf("Enter a number to find out whether a number is pallindrome or not : ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==m)
    {
        printf("\nThe number %d is a pallindrome.",m);
    }
    else
    printf("\nThe number %d is not a pallindrome",m);
    return 0;
}