//Q56: Read and print elements of a one-dimensional array.
#include<stdio.h>
int main()
{
    int arr[10],n,i;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : " );
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The %d elements in the array are : ",n );
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}