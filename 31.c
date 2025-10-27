//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main()
{
    int num,i=0,ori;
    int binary[32];
    printf("Enter a number to convert into binary equivalent : ");
    scanf("%d",&num);
    ori=num;
    if(num==0)
    {
        printf("\nBinary equivalent of 0 = 0");
        return 0;
    }
    while(num>0)
    {
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    printf("\nBinary equivalent of %d is = ",ori);
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    printf("\n");
    return 0;
}