//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.
#include<stdio.h>
int main()
{
    int per;
    printf("Enter percentage(0-100)");
    scanf("%d",&per);
    if(per<0 || per>100)
    {
        printf("Enter a valid percentage\n");
    }
    else
    {
        if(per>=90 && per<=100)
        {
            printf("\nGrade A");
        }
        else if(per>=80 && per<=89)
        {
            printf("\nGrade B");
        }
        else if(per>=70 && per<=79)
        {
            printf("\nGrade C");
        }
        else if(per>=60 && per<=69)
        {
            printf("\nGrade D");
        }
        else
        {
            printf("\nGrade F");
        }
    }
    return 0;
}