#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;
    int *ptr;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (i = 0; i < 5; i++) {
        sum = sum + *ptr;
        ptr++;
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
