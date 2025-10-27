//Q21: Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
    int mon;
    printf("Enter the month number to show number of days(1-12) : ");
    scanf("%d",&mon);
    switch(mon)
    {
        case 1:
         printf("\nJanuary- 31 days");
         break;
         case 2:
         printf("\nFebruary- 28 or 29 days");
         break;
         case 3:
         printf("\nMarch- 31 days");
         break;
         case 4:
         printf("\nApril- 30 days");
         break;
         case 5:
         printf("\nMay- 31 days");
         break;
         case 6:
         printf("\nJune- 30 days");
         break;
         case 7:
         printf("\nJuly- 31 days");
         break;
         case 8:
         printf("\nAugust- 31 days");
         break;
         case 9:
         printf("\nSeptember- 30 days");
         break;
         case 10:
         printf("\nOctober- 31 days");
         break;
         case 11:
         printf("\nNovember- 30 days");
         break;
         case 12:
         printf("\nDecember- 31 days");
         break;
         default:
         printf("Enter a valid number from 1 to 12.");
    }
    return 0;
}