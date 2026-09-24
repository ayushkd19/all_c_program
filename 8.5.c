#include <stdio.h>

int main() {
    int arr[5], i;
    int *ptr1, *ptr2, temp;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr1 = arr;
    ptr2 = arr + 4;

    while (ptr1 < ptr2) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }

    printf("Reversed array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
