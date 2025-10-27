//Q27: Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
    int i,n,odd,sum=0;
    printf("Enter the value of n upto which sum of odd numbers is to be found : ");
    scanf("%d",&n);
    printf("\nThe odd numbers upto %d are : ",n);
    for(i=1;i<=n;i=i+2)
    {
        odd=i;
        printf("%d ",odd);
        sum=sum+i;
    }
    printf("\nThe sum of odd numbers from 1 to %d is : %d",n,sum);
    return 0;
}