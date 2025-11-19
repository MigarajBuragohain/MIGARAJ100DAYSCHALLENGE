//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() 
{
    int num,ori;
    int digit, count[10] = {0}, max = 0, maxDigit = 0;
    printf("Enter an integer number: ");
    scanf("%int", &num);
    ori =num;
    if (num < 0) 
    {
        num = -num;
    }
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > max) 
        {
            max = count[i];
            maxDigit = i;
        }
    }
    printf("The digit that occurs the most times in %d is %d (occurs %d times).\n",ori,maxDigit, max);
    return 0;
}
