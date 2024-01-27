#include <stdio.h>
#include <stdlib.h>

int maxDifference(int arr[], int size) {
    int max_odd = arr[0];
    int max_even = arr[1];
    int min_odd = arr[0];
    int min_even = arr[1];

    for (int i = 2; i < size; i++) {
        if (i % 2 == 0) {
            if (arr[i] > max_even) {
                max_even = arr[i];
            }
            if (arr[i] < min_even) {
                min_even = arr[i];
            }
        } else {
            if (arr[i] > max_odd) {
                max_odd = arr[i];
            }
            if (arr[i] < min_odd) {
                min_odd = arr[i];
            }
        }
    }

    int diff_odd_even = abs(max_odd - min_even);
    int diff_even_odd = abs(max_even - min_odd);

    return (diff_odd_even > diff_even_odd) ? diff_odd_even : diff_even_odd;
}

int main() {
    int arr[] = {2, 6, 3, 9, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_diff = maxDifference(arr, size);

    printf("Maximum difference between odd and even position elements: %d\n", max_diff);

    return 0;
}
