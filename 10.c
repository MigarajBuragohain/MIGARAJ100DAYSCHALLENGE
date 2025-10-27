//Q10 :Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int seconds,hours,mins,remainingsec;
    printf("Enter time in seconds : ");
    scanf("%d",&seconds);
    hours=seconds/3600;
    remainingsec=seconds%3600;
    mins=remainingsec/60;
    remainingsec=remainingsec%60;

    printf("Time in hours:minutes:seconds=%02d:%02d:%02d",hours,mins,remainingsec);
    return 0;
}