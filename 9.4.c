#include <stdio.h>

void addComplex(int r1, int i1, int r2, int i2)
{
    int real, imag;

    real = r1 + r2;
    imag = i1 + i2;

    printf("Sum = %d + %di", real, imag);
}

int main()
{
    int r1, i1, r2, i2;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%d %d", &r1, &i1);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%d %d", &r2, &i2);

    addComplex(r1, i1, r2, i2);

    return 0;
}