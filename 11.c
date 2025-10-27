//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check whether the number is odd or even: ");
    scanf("%d",&num);
    if(num%2==0)
    printf("The number you entered is even.");
    else
    printf("The number you entered is odd.");
}