//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    int num1,num2,n,result;
    printf("1.Adiition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Modulus");
    printf("\nEnter the number you want to perform(1-5) : ");
    scanf("%d",&n);
    printf("\nEnter two numbers : ");
    scanf("%d %d",&num1,&num2);
    switch(n)
    {
        case 1:
        result=num1+num2;
        printf("\nAddition of %d and %d is : %d",num1,num2,result);
        break;
        case 2:
        result=num1-num2;
        printf("\nSubtraction of %d and %d is : %d",num1,num2,result);
        break;
        case 3:
        result=num1*num2;
        printf("\nProduct of %d and %d is : %d",num1,num2,result);
        break;
        case 4:
        if(num2!=0)
        {
            result=num1/num2;
            printf("\nDivision of %d and %d is : %d",num1,num2,result);
        }
        else
        printf("\nDivision by zero is not possible.");
        break;
        case 5:
        if(num2!=0)
        {
            result=num1%num2;
            printf("\nRemainder of %d divided by %d is : %d",num1,num2,result);
        }
        else
        printf("\nDivision by zero is not possible.");
        break;
        default:
        printf("\nPlease enter a valid operator you want to perform.");
    }
    return 0;
}