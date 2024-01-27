#include<stdio.h>

int main() {
    int num;
    printf("Please Enter your marks: ");
    scanf("%d", &num);

    if (num >= 90 && num <= 100) {
        printf("You got A+ grade.\n");
    } else if (num >= 60) {
        printf("You got B+ grade.\n");
    } else if (num >= 40) {
        printf("You got C+ grade.\n");
    } else if (num < 40) {
        printf("You Failed in this exam.\n");
    // } else {
    //     printf("Not Valid Your Marks.\n");
    }

    return 0;
}
