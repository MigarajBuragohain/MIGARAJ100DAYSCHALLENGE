//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() 
{
    int a[10][10], n, i, j, k, distinct = 1;
    printf("Enter the size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) 
    {
        for(k = i + 1; k < n; k++) 
        {
            if(a[i][i] == a[k][k]) 
            {
                distinct = 0;
                break;
            }
        }
    }
    if(distinct == 1)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");
    return 0;
}