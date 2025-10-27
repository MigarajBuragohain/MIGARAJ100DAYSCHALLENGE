//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers whose values are to be swapped :");
    scanf("%d %d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;
}