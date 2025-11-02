//Q57: Find the sum of array elements.
#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("Enter number of elements in the array : " );
    scanf("%d",&n);
    printf("Enter %d elements of the array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sum of elements = " );
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        sum=sum+a[i];
        if(i<n-1)
        printf("+ ");
    }
    printf(" = %d ",sum);
}