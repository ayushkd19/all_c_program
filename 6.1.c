#include <stdio.h>
int main(){
    int n, i = 1, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    while(i <= n){
        j = 1;
        while(j < i){
            printf(" ");
            j++;
        }
        j = i;
        while(j <= n){
            if(j == i || j == n || i == 1)
                printf("*");
            else
                printf(" ");

            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
