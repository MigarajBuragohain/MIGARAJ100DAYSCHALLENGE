//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number to show which day of the week(1-7) : ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("\nMonday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("Please enter a valid number from 1 to 7\n");    
    }
    return 0;
}