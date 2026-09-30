#include <stdio.h>

void display(int n)
{
    int a = 1, b = 1, c, i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= a; j++)
        {
            printf("*");
        }

        printf("\n");

        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter pattern rows = ");
    scanf("%d", &n);

    display(n);

    return 0;
}