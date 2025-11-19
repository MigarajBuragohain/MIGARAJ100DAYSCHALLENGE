///Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int n, i, j, flag = 1;

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
        for(j = 0; j < n; j++) 
        {
            transpose[i][j] = a[j][i];
        }
    }

    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(a[i][j] != transpose[i][j]) 
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
