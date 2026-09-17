#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Main diagonal elements are:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    return 0;
}