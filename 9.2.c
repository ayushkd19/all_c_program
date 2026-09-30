#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Cube of %d = %d\n", i, cube(i));
    }

    return 0;
}