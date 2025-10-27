//Q4: Write a program in c to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float r,per,area;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    per=2*r*3.14;
    area=3.14*r*r;
    printf("\nThe circumference of the circle is :%f",per);
    printf("\nThe area of the circle is :%f",area);
    return 0;
}