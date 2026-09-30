#include <stdio.h>
int cube(int n)
{
    return n * n * n;
}
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = cube(n);
    printf("Cube of %d = %d", n, result);
    return 0;
}