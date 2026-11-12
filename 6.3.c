#include <stdio.h>
int main(){
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n-i; j++)
            printf(" ");
        printf("*");
        if(i > 1 && i < n){
            for(j = 1; j <= 2*i-3; j++)
                printf(" ");
            printf("*");
        }
        if(i == n){
            for(j = 1; j <= 2*n-2; j++)
                printf("*");
        }
        printf("\n");}
    return 0;
}
