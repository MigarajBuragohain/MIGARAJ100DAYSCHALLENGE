//Q34: Write a program to check if a number is prime.
#include<stdio.h>
int main()
{
    int num,i,prime=0;
    printf("Enter a number to find out whether it is prime or not : ");
    scanf("%d",&num);
    if(num<=1)
    printf("It is not a prime number.");
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime=0)
    printf("%d is a prime number.",num);
    else
    printf("%d is not an prime number.",num);
}