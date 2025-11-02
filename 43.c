//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int main() 
{
    int num, ori, digit, sum = 0, fact, i;
    printf("Enter a number to find out whether it is a strong number or not : ");
    scanf("%d", &num);
    ori = num;
    while (num > 0) 
    {
        digit = num % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) 
        {
            fact = fact * i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == ori)
        printf("%d is a Strong Number.\n", ori);
    else
        printf("%d is not a Strong Number.\n", ori);
    return 0;
}
