//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int a,b,sum,diff,pro,div;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    
    if (b!=0)
    {
        div=a/b;
        printf("Resuts :\n");
        printf("Sum=%d\n",sum);
        printf("Difference=%d\n",diff);
        printf("Product=%d\n",pro);
        printf("Quotient=%d\n",div);
    }
    else
    {
        printf("Resuts :\n");
        printf("Sum=%d\n",sum);
        printf("Difference=%d\n",diff);
        printf("Product=%d\n",pro);
        printf("Quotient=Undefined(Division by zero is not possible)");
    }
    return 0;

}