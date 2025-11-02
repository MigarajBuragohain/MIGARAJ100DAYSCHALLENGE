//Q60: Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main()
{
    int a[10],i,n,positive=0,negative=0,zero=0;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter %d elements for the array : " );
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        positive++;
        else if(a[i]<0)
        negative++;
        else 
        zero++;
    }
    printf("\nNumber of positive numbers = %d ",positive);
    printf("\nNumber of negative numbers = %d ",negative);
    printf("\nNumber of zero = %d",zero);
}