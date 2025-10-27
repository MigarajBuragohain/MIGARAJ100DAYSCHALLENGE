//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to find out whether it is leap year or not : ");
    scanf("%d",&year);
    if((year%400==0) || (year%4==0 && year%100!=0))
    {
        printf("\nThe year you entered %d is leap year.",year);
    }
    else
    {
        printf("\nThe year you entered %d is not a leap year.",year);
    }
    return 0;
}