#include <stdio.h>

void decimalToOctal(int n)
{
    int octal[20], i = 0;

    while (n > 0)
    {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }

    printf("Octal number = ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }
}

int main()
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    decimalToOctal(n);

    return 0;
}