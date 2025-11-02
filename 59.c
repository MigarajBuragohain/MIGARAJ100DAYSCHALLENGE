//Q59: Count even and odd numbers in an array.
#include<stdio.h>
int main()
{
    int a[10],i,n;
    int odd=0,even=0;
    printf("Enter number of elements : " );
    scanf("%d",&n);
    printf("Enter %d elements of the array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    even++;
    else
    odd++;
    }
    printf("Number of even elements : %d",even);
    printf("\nNumber of odd elements : %d",odd);
}