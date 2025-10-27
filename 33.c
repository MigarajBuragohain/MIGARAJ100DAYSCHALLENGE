//Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
    int num,ori,rem,n=0;
    float result=0.0;
    printf("Enter a number to find whether it is an armstrong number or not : ");
    scanf("%d",&num);
    ori=num;
    while(ori!=0)
    {
        ori=ori/10;
        ++n;
    }
ori=num;
    while(ori!=0)
    {
        rem=ori%10;
        result=result+pow(rem,n);
        ori=ori/10;
    }
    if((int)result==num)
    {
    printf("%d is an armstrong number.",num);
    }
    else
    {
    printf("%d is not an armstrong number.",num);
    }
    return 0;
}