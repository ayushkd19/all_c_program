#include <stdio.h>

int main() {
    int num, i, flag = 0;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    if (*ptr <= 1) {
        flag = 1;
    } else {
        for (i = 2; i <= *ptr / 2; i++) {
            if (*ptr % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", *ptr);
    else
        printf("%d is not a prime number.\n", *ptr);

    return 0;
}
