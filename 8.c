//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Write number of terms to be added:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\nThe sum upto %d terms is : %d",n,sum);
    return 0;
}