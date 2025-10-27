//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c) && (b+c>a) && (c+a>b))
    {
        if(a==b && b==c)
        {
            printf("\nThe triangle with sides %d,%d and %d is equilateral.",a,b,c);
        }
        else if(a==b || b==c || c==a)
        {
            printf("\nThe triangle with sides %d,%d and %d is isosceles.",a,b,c);
        }
        else
        {
           printf("\nThe triangle with sides %d,%d and %d is scalene.",a,b,c);
        }
    }
    else
    {
        printf("\nThe sides you entered cannot form a triangle.");
    }
    return 0;
}