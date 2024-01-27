#include <stdio.h>

void convertToUpperCase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
                                              // Convert lowercase to uppercase
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString);

    convertToUpperCase(inputString);

    printf("String in uppercase: %s\n", inputString); // input string 

    return 0;
}
