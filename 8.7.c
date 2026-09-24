#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;
    int *ptr;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    ptr = arr;

    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Sort the array using pointer arithmetic
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + i) > *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("The %dth smallest element is: %d\n", k, *(ptr + k - 1));

    return 0;
}
