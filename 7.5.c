#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j, sum = 0;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of upper triangular elements = %d", sum);

    return 0;
}