//Q69: Find the second largest element in an array.
#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int largest = -999999, secondLargest = -999999;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -999999) 
    {
        printf("No second largest element (all elements may be equal).\n");
    } else 
    {
        printf("The second largest element is: %d\n", secondLargest);
    }
    return 0;
}
