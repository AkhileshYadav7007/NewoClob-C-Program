#include <stdio.h>

#define MAX_SIZE 100


typedef struct {
    int arr[MAX_SIZE];
    int size;
} ArrayList;


void init(ArrayList *list) {
    list->size = 0;
}


void insert(ArrayList *list, int value) {
    if (list->size < MAX_SIZE) {
        list->arr[list->size] = value;
        list->size++;
    } else {
        printf("List is full, cannot insert.\n");
    }
}


void deleteElement(ArrayList *list, int value) {
    int i, found = 0;

    for (i = 0; i < list->size; i++) {
        if (list->arr[i] == value) {
            found = 1;
            break;
        }
    }

    if (found) {
        
        for (; i < list->size - 1; i++) {
            list->arr[i] = list->arr[i + 1];
        }

        list->size--;
        printf("Element %d deleted successfully.\n", value);
    } else {
        printf("Element %d not found in the list.\n", value);
    }
}


void display(ArrayList *list) {
    printf("List: ");
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->arr[i]);
    }
    printf("\n");
}

int main() {
    ArrayList myList;
    init(&myList);

    insert(&myList, 10);
    insert(&myList, 20);
    insert(&myList, 30);

    display(&myList);

    deleteElement(&myList, 20);

    display(&myList);

    return 0;
}
