#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *vo;
    int vowel = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    vo = str;
    while (*vo != '\0'){
        if (*vo == 'a' || *vo == 'e' || *vo == 'i' || *vo == 'o' || *vo == 'u' ){
            vowel++;

        }
        else if ( *vo == 'A' || *vo == 'E' || *vo == 'I' || *vo == 'O' || *vo == 'U'){
            vowel++;

        }
        vo++;
    }
    printf("Number of vowels are: %d", vowel);
    return 0;
}
