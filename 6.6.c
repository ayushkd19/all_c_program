#include <stdio.h>
int main(){
    int month, year, first, days, i;
    char *name[] = {"January", "February", "March",
                    "April", "May", "June",
                    "July", "August", "September",
                    "October", "November", "December"};
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter first day (0=Sunday, 6=Saturday): ");
    scanf("%d", &first);
    if(month < 1 || month > 12 || first < 0 || first > 6 || year < 1){
        printf("Invalid input!");
        return 0;
    }
    if(month == 2){
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;
    printf("\n%s %d\n", name[month-1], year);
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    for(i = 0; i < first; i++)
        printf("    ");
    for(i = 1; i <= days; i++){
        printf("%4d", i);
        if((first + i) % 7 == 0)
            printf("\n");
    }
    if((first + days) % 7 != 0)
        printf("\n");
    return 0;
}
