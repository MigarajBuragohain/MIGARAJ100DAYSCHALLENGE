//Q35: Write a program to print all factors of a given number.
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number to find all the factors : ");
    scanf("%d",&num);
    printf("Thr factors of %d are : ",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("\t");
}