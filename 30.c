//Q30: Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int n,rev=0,m,remainder;
    printf("Enter a number which is to be reversed : ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    printf("The reversed of %d is : %d",m,rev);
    return 0;
}