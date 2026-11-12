#include<stdio.h>
int main(){
    int r,c,s,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n-r+1;c++){
            printf("*");}
        for(s=1;s<=2*r-1;s++){
            printf(" ");
}
    for(c=1;c<=n-r+1;c++){
    printf("*");
    }
    printf("\n");
}
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r+1;c++){
            printf("*");}
        for(s=1;s<=2*r-1;s++){
            printf(" ");
}
    for(c=1;c<=n-r+1;c++){
        printf("*");
}
printf("\n");}}
