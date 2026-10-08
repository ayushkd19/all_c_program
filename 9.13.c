#include <stdio.h>

void changeValue(int n)
{
    n = n + 100;
}

void changeReference(int *n)
{
    *n = *n + 100;
}

int main()
{
    int a = 10, b = 10;

    printf("Before call by value: %d\n", a);
    changeValue(a);
    printf("After call by value: %d\n", a);

    printf("Before call by reference: %d\n", b);
    changeReference(&b);
    printf("After call by reference: %d\n", b);

    return 0;
}