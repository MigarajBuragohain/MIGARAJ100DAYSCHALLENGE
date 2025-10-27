//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include<stdio.h>
int main()
{
    int day;
    int fine=0;
    printf("Enter number of late days to calculate fine imposed : ");
    scanf("%d",&day);
    if(day<=0)
    printf("\nNo fine imposed");
    else if(day<=5)
    {
        fine=2*day;
        printf("\nfine  imposed for %d days late is : Rs%d",day,fine);
    }
    else if(day<=10)
    {
        fine=10+(day-5)*4;
        printf("\nfine  imposed for %d days late is : Rs%d",day,fine);
    }
    else if(day<=30)
    {
        fine=30+(day-10)*6;
        printf("\nfine  imposed for %d days late is : Rs%d",day,fine);
    }
    else
    printf("\nMembership cancelled.");
    return 0;
}