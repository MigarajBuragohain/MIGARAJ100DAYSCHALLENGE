//Q42: Write a program to check if a number is a perfect number.
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number to check whether it is a perfect number or not : ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num % i==0)
        {
        sum=sum+i;
        }
    }
    if(sum==num)
    printf("%d is a perfect number.",num);
    else
    printf("%d is not a perfect number.",num);
}
