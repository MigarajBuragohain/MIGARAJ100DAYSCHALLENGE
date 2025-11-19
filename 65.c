//Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int n, key, start, end, mid, i;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    start = 0;
    end = n - 1;

    while (start <= end) 
    {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d.\n", key, mid + 1);
            return 0;
        }
        else if (arr[mid] < key) 
        {
            start = mid + 1; 
        }
        else 
        {
            end = mid - 1;   
        }
    }
    printf("Element %d not found in the array.\n", key);
    return 0;
}
