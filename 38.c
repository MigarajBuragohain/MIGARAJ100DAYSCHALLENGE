//Q38: Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int num,sum=0,ori,rem;
    printf("Enter a number whose sum of digits is to be found : ");
    scanf("%d",&num);
    ori=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("The sum of digits of %d is %d",ori,sum);
}