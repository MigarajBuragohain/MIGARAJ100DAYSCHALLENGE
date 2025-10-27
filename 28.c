//Q28: Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int i,n,even;
    long pro=1;
    printf("Enter value of n upto which product of even numbers is to be found : ");
    scanf("%d",&n);
    printf("The even numbers upto %d are : ",n);
    for(i=2;i<=n;i=i+2)
    {
        even=i;
        printf("%d ",even);
        pro=pro*i;
    }
    printf("\nThe product of even numbers upto %d is : %d ",n,pro);
    return 0;
}