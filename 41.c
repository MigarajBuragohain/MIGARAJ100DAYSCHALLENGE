//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, n,ori, firstDigit, lastDigit, temp, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    ori=num;
    n = num;
    lastDigit = n % 10;
    while (n >= 10)
    {
        n = n / 10;
        place = place * 10;
    }
    firstDigit = n;
    temp = num % place;
    temp = temp / 10; 
    num = lastDigit * place + temp * 10 + firstDigit;

    printf("%d after swapping first and last digits: %d\n", ori,num);

    return 0;
}