//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main()
{
    char binary[30];
    int i;
    printf("Enter a binary number  to find it's 1 complement : ");
    scanf("%s",&binary);
    printf("The 1's complement of %s is : ",binary);
    for(i=0;binary[i]!= '\0';i++)
    if(binary[i]=='0')
    printf("1");
    else if(binary[i]=='1')
    printf("0");
    else
    {
        printf("Invalid binary character entered");
        return 1;
    }
    printf("\n");
    return 0;
}