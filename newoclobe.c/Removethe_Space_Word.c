#include <stdio.h>

void removeSpaces(char *str) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char inputString[100];

    printf("Enter a string with spaces: ");
    fgets(inputString, sizeof(inputString), stdin);

    removeSpaces(inputString);

    printf("String after removing spaces: %s\n", inputString);

    return 0;
}
