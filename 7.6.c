#include <stdio.h>

int main() {
    int arr[2][2][3];
    int i, j, k;

    printf("Enter elements of 3D array:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("\nElements of 3D array:\n");

    for (i = 0; i < 2; i++) {
        printf("Block %d:\n", i + 1);

        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}

