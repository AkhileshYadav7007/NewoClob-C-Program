#include <stdio.h>

int main() {
    int arr[100], n, i;
    
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int max = arr[0];
    int min = arr[0];

   
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    
    int difference = max - min;

    
    printf("The difference between the maximum and minimum elements is: %d\n", difference);

    return 0;
}
