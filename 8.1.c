#include <stdio.h>

int main() {
    int var = 20;
    int *ptr = &var;

    printf("Value of ptr  = %p\n", (void *)ptr);
    printf("Value of var  = %d\n", var);
    printf("Value of *ptr = %d\n", *ptr);

    return 0;
}
