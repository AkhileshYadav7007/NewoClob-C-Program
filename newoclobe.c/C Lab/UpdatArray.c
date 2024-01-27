#include <stdio.h>

int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};

    
    printf("Original Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    
    arr[2] = 10;

    
    printf("\nUpdated Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
