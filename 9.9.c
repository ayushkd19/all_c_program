#include <stdio.h>

int collatz(int n)
{
    int count = 1;

    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;

        count++;
    }

    return count;
}

int main()
{
    int n, terms;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    terms = collatz(n);

    printf("Number of terms = %d", terms);

    return 0;
}