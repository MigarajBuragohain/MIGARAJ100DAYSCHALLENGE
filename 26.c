//Q26: Write a program to print numbers from 1 to n.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter value of n to print numbers upto : ");
    scanf("%d",&n);
    printf("\nNumbers from 1 to %d is : ",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}