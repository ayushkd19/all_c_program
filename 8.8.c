#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    start = str;
    end = str + strlen(str) - 1;

    // Reverse the string in-place
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
