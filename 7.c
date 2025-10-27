//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers whose values are to be swapped :");
    scanf("%d %d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;
}