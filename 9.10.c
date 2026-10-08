#include <stdio.h>
#include <string.h>

char* checkPattern(int a[], int n)
{
    int i, arithmetic = 1, geometric = 1;

    for(i = 1; i < n; i++)
    {
        if(a[i] - a[i - 1] != a[1] - a[0])
            arithmetic = 0;

        if(a[i - 1] == 0 || a[i] * a[0] != a[i - 1] * a[1])
            geometric = 0;
    }

    if(arithmetic)
        return "Arithmetic";
    else if(geometric)
        return "Geometric";
    else
        return "neither arithmetic nor geometric";
}

int main()
{
    int a[5], i;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("%s", checkPattern(a, 5));

    return 0;
}