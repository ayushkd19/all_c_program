#include <stdio.h>
int main(){
    int n, i, digit, count;
    printf("Input any number: ");
    scanf("%d", &n);
    for(i = 0; i <= 9; i++){
        int temp = n;
        count = 0;
        for(; temp > 0; temp = temp / 10){
            digit = temp % 10;
            if(digit == i)
                count++;
        }
        printf("Frequency of %d = %d\n", i, count);
    }
    return 0;
}
