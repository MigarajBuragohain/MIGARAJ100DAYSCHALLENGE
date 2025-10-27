//Q3: Write a program in c to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int a,b,per,area;
    printf("Enter the length and breadth of the rectangle :");
    scanf("%d %d",&a,&b);
    per=2*(a+b);
    area=a*b;
    printf("\nThe perimeter of rectangle is:%d ",per);
    printf("\nThe area of rectangle is: %d",area);
    return 0;
}
