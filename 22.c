//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    float cp,sp,profit,loss,percentage;
    printf("Enter cost price : ");
    scanf("%f",&cp);
    printf("Enter Selling price : ");
    scanf("%f",&sp);
    if(cp<sp)
    
    {
        profit=sp-cp;
        percentage=(profit/cp)*100;
        printf("\nIt has a profit of %.2f",profit);
        printf("\nProfit percentage is : %.2f",percentage);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        percentage=(loss/cp)*100;
        printf("\nIt has a loss of %.2f",loss);
        printf("\nLoss percentage is : %.2f",percentage);
    }
    else
    {
        printf("\nIt has neither profit nor loss.");
    }
    return 0;
}