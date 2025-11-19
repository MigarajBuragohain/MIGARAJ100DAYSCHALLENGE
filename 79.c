//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int a[10][10], n, m, i, j, row, col;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Diagonals starting from first column
    for(i = 0; i < n; i++) {
        row = i;
        col = 0;

        while(row >= 0 && col < m) {
            printf("%d ", a[row][col]);
            row--;
            col++;
        }
        printf("\n");
    }

    // Diagonals starting from top row (excluding first column)
    for(j = 1; j < m; j++) {
        row = n - 1;
        col = j;

        while(row >= 0 && col < m) {
            printf("%d ", a[row][col]);
            row--;
            col++;
        }
        printf("\n");
    }

    return 0;
}
