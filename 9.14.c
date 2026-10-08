#include <stdio.h>

int main()
{
    int a[5], *p, i, small;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    p = a;
    small = *p;

    for(i = 1; i < 5; i++)
    {
        if(*(p + i) < small)
            small = *(p + i);
    }

    printf("Smallest number = %d", small);

    return 0;
}