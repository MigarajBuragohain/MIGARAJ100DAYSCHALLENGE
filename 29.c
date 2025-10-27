//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int i,n;
    long long fact=1;
    printf("Enter value of n upto which factorial is to be found : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factoial of %d is : %lld",n,fact);
    return 0;
}