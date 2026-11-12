#include <stdio.h>
int main(){
    int n, first, last;
    printf("Input number: ");
    scanf("%d", &n);
    n = (n < 0) ? -n : n;
    last = n % 10;
    for(; n >= 10; n = n / 10){
        first = n;}
    if(n < 10)
        first = n;
    printf("Sum of first and last digit: %d", first + last);
    return 0;
}
