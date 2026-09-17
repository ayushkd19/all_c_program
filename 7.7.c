#include <stdio.h>

int main(){
    int arr[100], n, sum=0, avg=0;


    printf("Enter enter total numbers: ");
    scanf("%d", &n);

    for (int i = 0; i<n; i++){
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j<n; j++){
        sum=sum+arr[j];
        avg=sum/(n);
    }
    
    printf("Sum is: %d\n", sum);
    printf("Avg is: %d", avg);
    return 0;
}