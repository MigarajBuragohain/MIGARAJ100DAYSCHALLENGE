//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to find whether it is positive,negative or zero : ");
    scanf("%d",&num);
    if(num>=0)
    {
        if(num>0)
        {
            printf("\nThe number is positive.");
        }
        else
        printf("\nThe number zero.");
    }
    else
    printf("\nThe number is negative.");
    return 0;
}