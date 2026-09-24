#include <stdio.h>
int main() {
    int arr[10][10];
    int rows, cols, i, j, sum = 0;
    int *ptr;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);}}
    ptr = &arr[0][0];
    for (i = 0; i < rows * cols; i++) {
        sum += *(ptr + i);}
    printf("Sum of all elements = %d\n", sum);
    return 0;}