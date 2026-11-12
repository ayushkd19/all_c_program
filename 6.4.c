#include <stdio.h>
int main(){
    int n, i, count = 0;
    printf("Input any number: ");
    scanf("%d", &n);
    printf("Prime factors of %d: ", n);
    for(i = 2; i <= n; i++){
        if(n % i == 0){
            count = 0;
            for(int j = 2; j <= i/2; j++){
                if(i % j == 0){
                    count++;
                    break;
                }}
            if(count == 0){
                printf("%d, ", i);
                while(n % i == 0)
                    n = n / i;
            }}}
    return 0;
}
