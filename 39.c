//Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main()
{
    int num,digit,product=1,hasodd=0,ori;
    printf("Enter a number whose product of odd digits is to be found : ");
    scanf("%d",&num);
    ori=num;
    while(num!=0)
    {
        digit=num%10;
        if(digit%2!=0)
        {
            product=product*digit;
            hasodd=1;
        }
        num=num/10;
    }
    if(hasodd)
    printf("The product of odd digits in %d is = %d ",ori,product);
    else
    printf("The number %d has no odd digits so product is 1.",ori);
}